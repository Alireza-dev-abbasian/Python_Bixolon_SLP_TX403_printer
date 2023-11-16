import ctypes

bixolonLib = ctypes.cdll.LoadLibrary('./BxlLibrary/BXLLAPI_x64.dll')

# Define argument and return types
# bixolonLib.PrintDeviceFont.argtypes = [ctypes.c_int, ctypes.c_int]
# bixolonLib.PrintDeviceFont.restype = ctypes.c_int

def connectToPriner():
    # return value 0 -> Success to connect
    # return value 71 -> No printer available to connect
    # return value 72 -> Not supported printer
    # return value 73 -> The print6er is in error status

    # INF_USB = 2
    # portName = ""
    # nBaudrate, nDatabits, nParity, nStopbits = 115200,0x0008,0,0
    # result = bixolonLib.ConnectPrinterEx(INF_USB, portName, nBaudrate, nDatabits, nParity, nStopbits)

    # or

    result = bixolonLib.ConnectUsb()
    print(result)
    return result

def checkStatus():
    
    if(connectToPriner() != 0):
        return
    
    status = bixolonLib.CheckStatus()
    print(status)

    bixolonLib.DisconnectPrinter()

def setPrinterSetting():
    autoCut= False
    paperWidth= 0
    paperHeight= 0
    marginX= 0
    marginY= 0
    density= 14
    sensorType= 0 
    printDirection= 0 # 0 is TopToBottom and 1 is BottomToTop
    dotsPer1mm = 8;	# mm to dot
	# 203 DPI : 1mm is about 7.99 dots
	# 300 DPI : 1mm is about 11.81 dots
	# 600 DPI : 1mm is about 23.62 dots

    paperWidth = int(101.600 * dotsPer1mm)
    paperHeight = int(152.400 * dotsPer1mm)

    # Clear Buffer of Printer
    bixolonLib.ClearBuffer()

    # Select international character set and code table.To
    bixolonLib.SetCharacterset(0, 0)

	# Set Label and Printer
    bixolonLib.SetConfigOfPrinter(0, density, printDirection, autoCut, 1, True)

    bixolonLib.SetPaper(marginX, marginY, paperWidth, paperHeight, sensorType, 0, dotsPer1mm*2) # 4 inch (Width) * 6 inch (Hiehgt)


def printLabel():

    if(connectToPriner() != 0):
        return
    
	# 203 DPI : 1mm is about 7.99 dots
	# 300 DPI : 1mm is about 11.811 dots
	# 600 DPI : 1mm is about 23.62 dots
    multiplier = 1
    resolution = bixolonLib.GetPrinterDPI()
    dotsPer1mm = int(resolution / 25.4)

    setPrinterSetting()
    bixolonLib.PrintDeviceFontW(2 * dotsPer1mm, 5 * dotsPer1mm, 3, multiplier, multiplier, 0, True, "IMEI: AJKfasd46565465fsd")
    bixolonLib.PrintBlock(int(1 * dotsPer1mm), 10 * dotsPer1mm, 71 * dotsPer1mm, 11 * dotsPer1mm, 0, 0)
    bixolonLib.PrintDeviceFontW(2 * dotsPer1mm, 15 * dotsPer1mm, 3, multiplier, multiplier, 0, True, "ID: 345498846545646")

    # number of label and number of copies of the label
    bixolonLib.Prints(1, 1)

    bixolonLib.DisconnectPrinter()


if __name__ == "__main__":
    try:
        printLabel()
    except ValueError as e:
        print("Error:")