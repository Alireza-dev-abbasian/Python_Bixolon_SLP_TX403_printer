#ifdef BXLLABEL_EXPORTS
#define BXLLAPI __declspec(dllexport)
#else
#define BXLLAPI __declspec(dllimport)
#endif


#ifndef BXLLABEL_EXPORTS
typedef enum _SLCS_COMMUNICATION_TYPE
{
	INF_SERIAL		= 0,
	INF_PARALLEL	= 1,
	INF_USB			= 2,
	INF_ETHERNET	= 3,
	INF_WIFI		= 4,
	INF_BLUETOOTH	= 5
};

typedef enum _SLCS_HRI
{
	HRI_NOT_PRINT	= 0,
	HRI_BELOW_SIZE1	= 1,
	HRI_ABOVE_SIZE1	= 2,
	HRI_BELOW_SIZE2	= 3,
	HRI_ABOVE_SIZE2	= 4,
	HRI_BELOW_SIZE3	= 5,
	HRI_ABOVE_SIZE3	= 6,
	HRI_BELOW_SIZE4	= 7,
	HRI_ABOVE_SIZE4	= 8,
}SLCS_HRI;

typedef enum _SLCS_PDF417_ECC_LEVEL
{
	PDF417_ECC_LEVEL0	=0,
	PDF417_ECC_LEVEL1	=1,
	PDF417_ECC_LEVEL2	=2,
	PDF417_ECC_LEVEL3	=3,
	PDF417_ECC_LEVEL4	=4,
	PDF417_ECC_LEVEL5	=5,
	PDF417_ECC_LEVEL6	=6,
	PDF417_ECC_LEVEL7	=7,
	PDF417_ECC_LEVEL8	=8
};

typedef enum _SLCS_CIRCLE_SIZE
{
	CIRCLE_SIZE_1	= 1,	// 40 x 40 in dot unit
	CIRCLE_SIZE_2	= 2,	// 56 x 56 in dot unit
	CIRCLE_SIZE_3	= 3,	// 72 x 72 in dot unit
	CIRCLE_SIZE_4	= 4,	// 88 x 88 in dot unit
	CIRCLE_SIZE_5	= 5,	// 104 x 104 in dot unit
	CIRCLE_SIZE_6	= 6		// 168 x 168 in dot unit
}SLCS_CIRCLE_SIZE;

typedef enum _SLCS_PDF417_DATA_TYPE
{
	PDF417_TEXT_TYPE	= 0,
	PDF417_NUMERIC_TYPE	= 1,
	PDF417_BINARY_TYPE	= 2,
}SLCS_PDF417_DATA_TYPE;

typedef enum _SLCS_DATAMATRIX_SIZE
{
	DATAMATRIX_SIZE_1	= 1,
	DATAMATRIX_SIZE_2	= 2,
	DATAMATRIX_SIZE_3	= 3,
	DATAMATRIX_SIZE_4	= 4
}SLCS_DATAMATRIX_SIZE;

typedef enum _SLCS_QRCODE_MODEL
{
	QRMODEL_1     = 1,
	QRMODEL_2     = 2
}SLCS_QRCODE_MODEL;

typedef enum _SLCS_QRCODE_SIZE
{
	QRSIZE_1     = 1,
	QRSIZE_2     = 2,
	QRSIZE_3     = 3,
	QRSIZE_4     = 4,
	QRSIZE_5     = 5,
	QRSIZE_6     = 6,
	QRSIZE_7     = 7,
	QRSIZE_8     = 8,
	QRSIZE_9     = 9
}SLCS_QRCODE_SIZE;

typedef enum _SLCS_QRCODE_ECC_LEVEL
{
	QRECCLEVEL_L     = 1,	// 7%
	QRECCLEVEL_M     = 2,	// 15%
	QRECCLEVEL_Q     = 3,	// 25%
	QRECCLEVEL_H     = 4	// 30%
}SLCS_QRCODE_ECC_LEVEL;

typedef enum _SLCS_BARCODE
{
	CODE39				= 0,
	CODE128				= 1,
	I2OF5				= 2,
	CODEBAR				= 3,
	CODE93				= 4,
	UPC_A				= 5,
	UPC_E				= 6,
	EAN13				= 7,
	EAN8				= 8,
	UCC_EAN128			= 9,
	CODE11				= 10,
	PLANET				= 11,
	INDUSTRIAL2OF5		= 12,
	STANDARD2OF5		= 13,
	LOGMARS				= 14,
	UPC_EAN_EXTENSIONS	= 15,
	POSTNET				= 16
}SLCS_BARCODE;	

typedef enum _SLCS_INTERNATIONAL_CHARSET
{
	// International Character set
	ICS_USA                    = 0,
	ICS_FRANCE                 = 1,
	ICS_GERMANY                = 2,
	ICS_UK                     = 3,
	ICS_DENMARK_I              = 4,
	ICS_SWEDEN                 = 5,
	ICS_ITALY                  = 6,
	ICS_SPAIN_I                = 7,
	ICS_NORWAY                 = 8,
	ICS_DENMARK_II             = 9,
	ICS_JAPAN                  = 10,
	ICS_SPAIN_II               = 11,
	ICS_LATIN_AMERICA          = 12,
	ICS_KOREA                  = 13,
	ICS_SLOVENIA_CROATIA       = 14,
	ICS_CHINA                  = 15
}SLCS_INTERNATIONAL_CHARSET;

typedef enum _SLCS_CODEPAGE
{ 
	// https://en.wikipedia.org/wiki/Windows_code_page 참조
	FCP_KSC5601		= 949,	// SDK 내부 용
	FCP_SHIFTJIS	= 932,	// SDK 내부 용
	FCP_BIG5		= 950,	// SDK 내부 용
	FCP_GB2312		= 936,	// SDK 내부 용
	//FCP_GB18030	= 54936
	FCP_CP437		= 0,
	FCP_CP850		= 1,	// OEM Multilingual Latin 1; Western European (DOS)
	FCP_CP852		= 2,	// OEM Latin 2; Central European (DOS)
	FCP_CP860		= 3,	// OEM Portuguese; Portuguese (DOS)
	FCP_CP863		= 4,	// OEM French Canadian; French Canadian (DOS)
	FCP_CP865		= 5,	// OEM Nordic; Nordic (DOS)
	FCP_CP1252		= 6,	// ANSI Latin 1; Western European (Windows)
	FCP_CP857		= 8,	// OEM Turkish; Turkish (DOS)
	FCP_CP737		= 9,	// OEM Greek (formerly 437G); Greek (DOS) 
	FCP_CP1250      = 10,	// ANSI Central European; Central European (Windows)// MPOS_CODEPAGE_CP1250 ??
	FCP_CP1253		= 11,	// ANSI Greek; Greek (Windows)
	FCP_CP1254		= 12,	// ANSI Turkish; Turkish (Windows)
	FCP_CP855       = 13,	// OEM Cyrillic (primarily Russian)
	FCP_CP862		= 14,	// OEM Hebrew; Hebrew (DOS)
	FCP_CP866		= 15,	// OEM Russian; Cyrillic (DOS)
	FCP_CP1251		= 16,	// ANSI Cyrillic; Cyrillic (Windows) 
	FCP_CP1255      = 17,	// ANSI Hebrew; Hebrew (Windows) 
	FCP_CP928		= 18,	// Greek
	//FCP_CP864		= 19,	// OEM Arabic; Arabic (864)
	FCP_CP775		= 20,	// OEM Baltic; Baltic (DOS) 
	FCP_CP1257		= 21,	// ANSI Baltic; Baltic (Windows)
	FCP_CP858		= 22	// OEM Multilingual Latin 1 + Euro symbol
}SLCS_CODEPAGE;  

typedef enum _SLCS_FONT_ALIGNMENT
{
	LEFTALIGN   = 'L',
	RIGHTALIGN  = 'R',
	CENTERALIGN = 'C'
}SLCS_FONT_ALIGNMENT;

typedef enum _SLCS_ALIGNMENT
{
	ALIGN_LEFT			= 0,
	ALIGN_CENTER		= 1,
	ALIGN_RIGHT			= 2,
	ALIGN_BOTH_SIDE		= 3
}SLCS_ALIGNMENT;

typedef enum _SLCS_FONT_DIRECTION
{
	LEFTTORIGHT     = 0,
	RIGHTTOLEFT     = 1
}SLCS_FONT_DIRECTION;

typedef enum _SLCS_DEVICE_FONT
{
	ENG_9X15	= 0,
	ENG_12X20	= 1,
	ENG_16X25	= 2,
	ENG_19X30	= 3,
	ENG_24X38	= 4,
	ENG_32X50	= 5,
	ENG_48X76	= 6,
	ENG_22X34	= 7,
	ENG_28X44	= 8,
	ENG_37X58	= 9,
	KOR_16X16	= 0x61,
	KOR_24X24	= 0x62,
	KOR_20X20	= 0x63,
	KOR_26X26	= 0x64,
	KOR_20X26	= 0x65,
	KOR_38X38	= 0x66,
	JPN_ShiftJIS= 0x6A,
	CHN_GB2312	= 0x6D,
	CHN_BIG5	= 0x6E
}SLCS_DEVICE_FONT;

typedef enum _SLCS_PRINT_SPEED
{
	PRINTER_SETTING_SPEED	= -1,
	PRINTER_SPEED_0			= 0,
	PRINTER_SPEED_1			= 1,
	PRINTER_SPEED_2			= 2,
	PRINTER_SPEED_3			= 3,
	PRINTER_SPEED_4			= 4,
	PRINTER_SPEED_5			= 5,
	PRINTER_SPEED_6			= 6,
	PRINTER_SPEED_7			= 7,
	PRINTER_SPEED_8			= 8,
	PRINTER_SPEED_9			= 9,
	PRINTER_SPEED_10		= 10,
	PRINTER_SPEED_11		= 11,
	PRINTER_SPEED_12		= 12,
}SLCS_PRINT_SPEED;

//	Block Option
typedef enum _SLCS_BLOCK_OPTION
{
	LINE_OVER_WRITING	= 0,
	LINE_EXCLUSIVE_OR	= 1,
	LINE_DELETE			= 2,
	SLOPE				= 3,
	BOX					= 4
}SLCS_BLOCK_OPTION;

typedef enum _SLCS_VECTOR_FONT
{
	ASCII        = 'U',
	KS5601       = 'K',
	BIG5         = 'B',
	GB2312       = 'G',
	ShiftJIS     = 'J'	
}SLCS_VECTOR_FONT;


typedef enum _SLCS_DITHER_OPTION
{
	// Floyd-Steinberg, Ordered dither, Stevenson-Arce, Bayer matrix[16x16 ordered dither]
	DITHER_NONE = -1,
	DITHER_1	= 0,
	DITHER_2	= 1,
	DITHER_3	= 6,
	DITHER_4	= 7
}SLCS_DITHER_OPTION;


typedef enum _SLCS_RFID_TRANSPONDER_TYPE
{
	//	RFID Transponder Type
	RFID_NONE					= 0,
	RFID_ISO18000_6TYPEA		= 1,
	RFID_ISO18000_6TYPEB		= 2,
	RFID_EPC_CLASS0				= 3,
	RFID_EPC_CLASS1				= 4,
	RFID_EPC_CLASS1_GENERATION2 = 5
}SLCS_RFID_TRANSPONDER_TYPE;

typedef enum _SLCS_RFID_DATA_TYPE
{
	RFID_ASCII			= 1,
	RFID_HEXADECIMAL	= 2,
	RFID_USER			= 3,
	RFID_EPC			= 4
}SLCS_RFID_TRANSPONDER;

typedef enum _SLCS_ROTATION
{
	// Rotation
	ROTATE_0	= 0,
	ROTATE_90	= 1,
	ROTATE_180	= 2,
	ROTATE_270	= 3
};

typedef enum _SLCS_ORIENTATION
{
	TOP2BOTTOM	= 0,
	BOTTOM2TOP	= 1
}SLCS_ORIENTATION;

typedef enum _SLCS_MEDIA_TYPE
{
	GAP			= 0,
	CONTINUOUS	= 1,
	BLACKMARK	= 2
}SLCS_MEDIA_TYPE;

typedef enum _SLCS_ERROR_CODE
{
	ERR_CODE_NO_ERROR			= 0,
	ERR_CODE_NO_PAPER			= 1,
	ERR_CODE_COVER_OPEN			= 2,
	ERR_CODE_CUTTER_JAM			= 3,
	ERR_CODE_TPH_OVER_HEAT		= 4,
	ERR_CODE_AUTO_SENSING		= 5,
	ERR_CODE_NO_RIBBON			= 6,

	ERR_CODE_POWER_OFF			= 7,
	ERR_CODE_CUTTER_UNCABLED	= 8,
	ERR_CODE_NOW_PRINTING		= 9,
	ERR_CODE_LABEL_PAUSED		= 10,

	//for Mobile Label.
	ERR_CODE_BOARD_OVER_HEAT	= 11,
	ERR_CODE_MOTOR_OVER_HEAT	= 12,
	ERR_CODE_WAIT_LABEL_TAKEN	= 13,

	ERR_CODE_MAKE_LABEL			= 14,
	ERR_CODE_WAIT_PEELER		= 15,
	ERR_CODE_STANDBY_OR_RFID	= 16,

	ERR_CODE_INVALID_PARAM		= 60,

	ERR_CODE_CONNECT			= 71,
	ERR_CODE_GETNAME			= 72,
	ERR_CODE_OFFLINE			= 73,
	ERR_CODE_WRITE				= 74,
	ERR_CODE_READ				= 75,

	ERR_CODE_UNKNOWN			= 99
}SLCS_ERROR_CODE;

#endif

BXLLAPI void __stdcall DEBUGLOG_ON();
BXLLAPI void __stdcall DEBUGLOG_OFF();

BXLLAPI BOOL __stdcall SetShowMsgBox(BOOL bShow);

BXLLAPI BOOL __stdcall GetDllVersion(LPSTR pszVersion);
BXLLAPI BOOL __stdcall GetDllVersionW(LPWSTR pszVersion);

BXLLAPI int __stdcall GetNetList(LPSTR szUsbList);
BXLLAPI int __stdcall GetUsbSnList(LPSTR szUsbList);
BXLLAPI int __stdcall GetUsbSnListW(LPWSTR szUsbList);

BXLLAPI BOOL __stdcall ConnectPrinter(int nInterface, 
									  LPCSTR szPortName = "", 
									  int nBaudRate = CBR_115200, 
									  int nDataBits = DATABITS_8, 
									  int nParity = NOPARITY, 
									  int nStopBits = ONESTOPBIT);

BXLLAPI BOOL __stdcall ConnectPrinterW(int nInterface, 
									  LPCWSTR szPortName = L"", 
									  int nBaudRate = CBR_115200, 
									  int nDataBits = DATABITS_8, 
									  int nParity = NOPARITY, 
									  int nStopBits = ONESTOPBIT);

BXLLAPI int __stdcall ConnectPrinterEx(int nInterface, 
									   LPCSTR szPortName = "", 
									   int nBaudRate = CBR_115200, 
									   int nDataBits = DATABITS_8, 
									   int nParity = NOPARITY, 
									   int nStopBits = ONESTOPBIT);

BXLLAPI int __stdcall ConnectPrinterExW(int nInterface, 
										LPCWSTR szPortName = L"", 
										int nBaudRate = CBR_115200, 
										int nDataBits = DATABITS_8, 
										int nParity = NOPARITY, 
										int nStopBits = ONESTOPBIT);

BXLLAPI BOOL __stdcall ConnectSerial(LPCSTR szPortName, 
										 int nBaudRate,
										 int nDataBits = DATABITS_8, 
										 int nParity = NOPARITY, 
										 int nStopBits = ONESTOPBIT);

BXLLAPI BOOL __stdcall ConnectSerialW(LPCWSTR szPortName, 
									 int nBaudRate,
									 int nDataBits = DATABITS_8, 
									 int nParity = NOPARITY, 
									 int nStopBits = ONESTOPBIT);

BXLLAPI BOOL __stdcall ConnectParallel(LPCSTR szPortName);

BXLLAPI BOOL __stdcall ConnectParallelW(LPCWSTR szPortName);

BXLLAPI BOOL __stdcall ConnectUsb();

BXLLAPI BOOL __stdcall ConnectUsbSN(LPCSTR szUsbSN);
BXLLAPI BOOL __stdcall ConnectUsbSNW(LPCWSTR szUsbSN);

BXLLAPI BOOL __stdcall ConnectNet(LPCSTR szIpAddr, int nPortNum);
BXLLAPI BOOL __stdcall ConnectNetW(LPCWSTR szIpAddr, int nPortNum);

BXLLAPI BOOL __stdcall DisconnectPrinter();

BXLLAPI int __stdcall  GetPrinterDPI();

BXLLAPI int __stdcall CheckStatusCP();

BXLLAPI int __stdcall CheckStatus();

BXLLAPI int __stdcall checkStatus();

BXLLAPI BOOL __stdcall Prints(int nLabelSet, int nCopiesOfEachLabel);

BXLLAPI BOOL __stdcall SetCharacterset(int nInternationalCharacterSet, int nCodepage);

BXLLAPI BOOL __stdcall SetConfigOfPrinter(int nSpeed, 
										  int nDensity, 
										  int nOrientation, 
										  BOOL bAutoCut, 
										  int nCuttingPeriod, 
										  BOOL bBackFeeding);

BXLLAPI BOOL __stdcall SetPaper(int nHorizontalMagin, 
								int nVerticalMargin,
								int nPaperWidth, 
								int nPaperLength, 
								int nMediaType, 
								int nOffSet, 
								int nGapLengthORThicknessOfBlackLine = 16);

BXLLAPI BOOL __stdcall PrintDeviceFont(int nHorizontalPos,
									   int nVerticalPos,
									   int nFontName,
									   int nHorizontalMulti,
									   int nVerticalMulti,
									   int nRotation,
									   BOOL bBold,
									   LPCSTR szText);

BXLLAPI BOOL __stdcall PrintDeviceFontW(int nHorizontalPos,
										int nVerticalPos,
										int nFontName,
										int nHorizontalMulti,
										int nVerticalMulti,
										int nRotation,
										BOOL bBold,
										LPCWSTR wszText);

BXLLAPI BOOL __stdcall PrintVectorFont(int nHorizontalPos, 
									   int nVerticalPos, 
									   LPCSTR FontSelection,
									   int FontWidth,
									   int FontHeight,
									   LPCSTR RightSideCharSpacing,
									   BOOL bBold,
									   BOOL ReversePrinting,
									   BOOL TextStyle,
									   int Rotation,
									   LPCSTR TextAlignment,
									   int TextDirection,
									   LPCSTR pData);

BXLLAPI BOOL __stdcall PrintVectorFontW(int nHorizontalPos, 
										int nVerticalPos, 
										LPCSTR FontSelection,
										int FontWidth,
										int FontHeight,
										LPCSTR RightSideCharSpacing,
										BOOL bBold,
										BOOL ReversePrinting,
										BOOL TextStyle,
										int  Rotation,
										LPCSTR TextAlignment,
										int TextDirection,
										LPCWSTR pData);

BXLLAPI BOOL __stdcall PrintTrueFont(int nHorizontalPos, 
									 int nVerticalPos, 
									 LPCSTR szFontName, 
									 int nFontSize, 
									 int nRotation, 
									 BOOL bItalic, 
									 BOOL bBold, 
									 BOOL bUnderline, 
									 LPCSTR szText, 
									 BOOL bDataCompression = FALSE);

BXLLAPI BOOL __stdcall PrintTrueFontW(int nHorizontalPos, 
									 int nVerticalPos, 
									 LPCWSTR wszFontName, 
									 int nFontSize, 
									 int nRotation, 
									 BOOL bItalic, 
									 BOOL bBold, 
									 BOOL bUnderline, 
									 LPCWSTR wszText, 
									 BOOL bDataCompression = FALSE);

BXLLAPI BOOL __stdcall PrintTrueFontLib(int nHorizontalPos, 
										int nVerticalPos, 
										LPCSTR szFontName, 
										int nFontSize, 
										int nRotation, 
										BOOL bItalic, 
										BOOL bBold, 
										BOOL bUnderline, 
										LPCSTR szText, 
										BOOL bDataCompression = FALSE);

BXLLAPI BOOL __stdcall PrintTrueFontLibW(int nHorizontalPos, 
										 int nVerticalPos, 
										 LPCWSTR wszFontName, 
										 int nFontSize, 
										 int nRotation, 
										 BOOL bItalic, 
										 BOOL bBold, 
										 BOOL bUnderline, 
										 LPCWSTR wszText, 
										 BOOL bDataCompression = FALSE);

BXLLAPI BOOL __stdcall PrintTrueFontLibWithAlign(int nHorizontalPos, 
												 int nVerticalPos, 
												 LPCSTR szFontName, 
												 int nFontSize, 
												 int nRotation, 
												 BOOL bItalic, 
												 BOOL bBold, 
												 BOOL bUnderline, 
												 LPCSTR szText, 
												 int nReserved,
												 int nAlignment, 
												 BOOL bDataCompression = FALSE);

BXLLAPI BOOL __stdcall PrintTrueFontLibWithAlignW(int nHorizontalPos, 
												 int nVerticalPos, 
												 LPCWSTR wszFontName, 
												 int nFontSize, 
												 int nRotation, 
												 BOOL bItalic, 
												 BOOL bBold, 
												 BOOL bUnderline, 
												 LPCWSTR wszText, 
												 int nReserved,
												 int nAlignment, 
												 BOOL bDataCompression = FALSE);

BXLLAPI BOOL __stdcall Print1DBarcode(int nHorizontalPos,
										  int nVerticalPos,
										  int nBarcodeType,
										  int nNarrowBarWidth,
										  int nWideBarWidth,
										  int nBarcodeHeight,
										  int nRotation,
										  int nHRI,
										  LPCSTR pData);

BXLLAPI BOOL __stdcall PrintPDF417(int nHorizontalPos, 
									   int nVerticalPos, 
									   int nMaxRow, 
									   int nMaxCol, 
									   int nECLevel, 
									   int nDataType, 
									   BOOL bHRI, 
									   int nOriginPoint, 
									   int nModuleWidth, 
									   int nBarHeight, 
									   int nRotation, 
									   LPCSTR pData);

BXLLAPI BOOL __stdcall PrintQRCode(int nHorizontalPos, 
									   int nVerticalPos, 
									   int nModel, 
									   int nECCLevel, 
									   int nQRCodeSize, 
									   int nRotation, 
									   LPCSTR pData);

BXLLAPI BOOL __stdcall PrintMaxiCode(int nHorizontalPos, 
									 int nVerticalPos, 
									 int nMode, 
									 LPCSTR pData);

BXLLAPI BOOL __stdcall PrintDataMatrix(int nHorizontalPos, 
									   int nVerticalPos, 
									   int nBarcodeSize, 
									   BOOL bReverse, 
									   int nRotation, 
									   LPCSTR pData);


BXLLAPI BOOL __stdcall PrintAztec(int nHorizontalPos, 
								  int nVerticalPos, 
								  int nBarcodeSize, 
								  int nExtendedChannel,
								  int nEccSymbol, 
								  int nMenuSymbol, 
								  int nNumberOfSymbols,
								  int nOptionalID, 
								  int nRotation,
								  LPCSTR pData);

BXLLAPI BOOL __stdcall PrintCode49(int nHorizontalPos, 
								   int nVerticalPos, 
								   int nNarrowBarWidth, 
								   int nWideBarWidth, 
								   int nBarHeight, 
								   int nHRI, 
								   int nStarting,
								   int nRotation, 
								   LPCSTR pData);

BXLLAPI BOOL __stdcall PrintCODABLOCK(int nHorizontalPos, 
									  int nVerticalPos, 
									  int nNarrowBarWidth, 
									  int nWideBarWidth, 
									  int nBarHeight,
									  int nSecurity,
									  int nDataColumns, 
									  LPCSTR pMode,
									  int nRowsEncode,
									  int nRotation,
									  LPCSTR pData);

BXLLAPI BOOL __stdcall PrintMicroPDF(int nHorizontalPos, 
									 int nVerticalPos, 
									 int nModuleWidth,	
									 int nBarHeight, 
									 int nMode, 
									 int nRotation, 
									 LPCSTR pData);

BXLLAPI BOOL __stdcall PrintIMB(int nHorizontalPos, 
								int nVerticalPos, 
								int nRotation, 
								int nHRI, 
								LPCSTR pData);

BXLLAPI BOOL __stdcall PrintMSIBarcode(int nHorizontalPos, 
									   int nVerticalPos, 
									   int nNarrowBarWidth,
									   int nWideBarWidth, 
									   int nBarHeight,
									   int nCheckdigit,
									   int nCheckdigitHri,
									   int nRotation,
									   int nHRI,
									   LPCSTR pData);

BXLLAPI BOOL __stdcall PrintPlesseyBarcode(int nHorizontalPos, 
										   int nVerticalPos,
										   int nNarrowBarWidth,
										   int nWideBarWidth,
										   int nBarHeight,
										   int nCheckdigitHRI,
										   int nRotation,
										   int nHRI, 
										   LPCSTR pData);

BXLLAPI BOOL __stdcall PrintTLC39Barcode(int nHorizontalPos, 
										 int nVerticalPos, 
										 int nNarrowBarWidth,
										 int nWideBarWidth,
										 int nBarHeight, 
										 int nPDF417Height,
										 int nPDF417narrowbarWidth,
										 int nRotation,
										 LPCSTR pData);

BXLLAPI BOOL __stdcall PrintRSSBarcode(int nHorizontalPos, 
									   int nVerticalPos, 
									   int nRssType, 
									   int nMagnification, 
									   int nSeparatorHeight,
									   int nBarcodeHeight,	
									   int nSegmentWidth,
									   int nRotation, 
									   LPCSTR pData);

BXLLAPI BOOL __stdcall PrintImageLib(int nHorizontalStartPos, 
									 int nVerticalStartPos, 
									 LPCSTR pImageFilename, 
									 int nDither, 
									 BOOL bWithRLE);

BXLLAPI BOOL __stdcall PrintImageLibW(int nHorizontalStartPos, 
									  int nVerticalStartPos, 
									  LPCWSTR pImageFilename, 
									  int nDither, 
									  BOOL bWithRLE);

BXLLAPI BOOL __stdcall PrintImageLibWithSize(int nHorizontalStartPos, 
											 int nVerticalStartPos, 
											 int nNewWidth, 
											 int nNewHeight, 
											 LPCSTR pImageFilename, 
											 int nDither, 
											 BOOL bDataCompression);

BXLLAPI BOOL __stdcall PrintImageLibWithSizeW(int nHorizontalStartPos, 
											  int nVerticalStartPos, 
											  int nNewWidth, 
											  int nNewHeight, 
											  LPWSTR pImageFilename, 
										 	  int nDither, 
											  BOOL bDataCompression);

BXLLAPI BOOL __stdcall PrintImageLZMA(int nHorizontalStartPos, 
									  int nVerticalStartPos, 
									  LPCSTR pImageFilename, 
									  int nDither);

BXLLAPI BOOL __stdcall PrintImageLZMAW(int nHorizontalStartPos, 
									   int nVerticalStartPos, 
									   LPCWSTR pImageFilename, 
									   int nDither);

BXLLAPI BOOL __stdcall PrintBlock(int nHorizontalStartPos,
								  int nVerticalStartPos,
								  int nHorizontalEndPos,
								  int nVerticalEndPos,
								  int nOption,
								  int nThickness);

BXLLAPI BOOL __stdcall PrintCircle(int nHorizontalStartPos,
								   int nVerticalStartPos,
								   int nDiameter,
								   int nMulti);

BXLLAPI BOOL __stdcall PrintBinaryFile(LPCSTR szBinaryPathName);
BXLLAPI BOOL __stdcall PrintBinaryFileW(LPCWSTR szBinaryPathName);

BXLLAPI BOOL __stdcall PrintDirect(LPCSTR pDirectData, 
								   BOOL bAddCr);

BXLLAPI BOOL __stdcall ClearBuffer();

BXLLAPI BOOL __stdcall WriteBuff(PBYTE pBuffer, 
								 DWORD dwNumberOfBytesToWrite, 
								 DWORD &dwWritten);

BXLLAPI BOOL __stdcall ReadBuff(PBYTE pBuffer, 
								DWORD dwNumberOfBytesToRead, 
								DWORD &dwReaded);	


/**********************************************************************************************************************/
// RFID Functions
/**********************************************************************************************************************/
BXLLAPI BOOL __stdcall RFIDSetup(int RFIDType, 
								 int NumberOfRetries, 
								 int NumberOfLabel, 
								 int RadioPower);

BXLLAPI BOOL __stdcall RFIDCalibration();

BXLLAPI BOOL __stdcall RFIDTransPosition(int transPosition);

BXLLAPI BOOL __stdcall RFIDWrite(int DataType, 
								 int StartingBlockNumber, 
								 int WriteByte, 
								 LPCSTR Data);

BXLLAPI BOOL __stdcall RFIDPassword(LPCSTR OldAccessPwd, 
									LPCSTR OldKillPwd, 
									LPCSTR NewAccessPwd, 
									LPCSTR NewKillPwd);

BXLLAPI BOOL __stdcall RFIDLock();

BXLLAPI BOOL __stdcall setupRFID(int RFIDType, 
								 int NumberOfRetries, 
								 int NumberOfLabel, 
								 int RadioPower);

BXLLAPI BOOL __stdcall calibrateRFID();

BXLLAPI BOOL __stdcall setRFIDPosition(int transPosition);

BXLLAPI BOOL __stdcall setEPCDataStructure(int totalSize, 
										   LPCSTR fieldSizes);

BXLLAPI BOOL __stdcall writeRFID(int DataType, 
								 int StartingBlockNumber, 
								 int WriteByte, 
								 LPCSTR Data);

BXLLAPI BOOL __stdcall setRFIDPassword(LPCSTR OldAccessPwd, 
									   LPCSTR OldKillPwd, 
									   LPCSTR NewAccessPwd, 
									   LPCSTR NewKillPwd);

BXLLAPI BOOL __stdcall lockRFID();

BXLLAPI BOOL __stdcall SetUsbSerialNumber(LPCSTR szSerialNumber);

BXLLAPI int __stdcall GetMotorUsage();

BXLLAPI int __stdcall GetTPHUsage();

BXLLAPI int __stdcall GetCuttingCount();

BXLLAPI int __stdcall GetPrinterInformation(int nType, LPSTR Data);