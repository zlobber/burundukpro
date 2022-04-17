#pragma once

using namespace std;

#ifndef _DEPRECATION_DISABLE   /* One time only */
#define _DEPRECATION_DISABLE   /* Disable deprecation true */
#if (_MSC_VER >= 1400)         /* Check version */
#pragma warning(disable: 4996) /* Disable deprecation */
#endif /* #if defined(NMEA_WIN) && (_MSC_VER >= 1400) */
#endif /* #ifndef _DEPRECATION_DISABLE */

//#define WS_EX_COMPOSITED 0x02000000L
#define THREADS_NUMBER 1

#pragma comment(linker,"/manifestdependency:\"type='win32' name='Microsoft.Windows.Common-Controls' "\
"version='6.0.0.0' processorArchitecture='x86' publicKeyToken='6595b64144ccf1df' language='*'\"")

DLGPROC GoToProc(HWND hwndDlg, UINT message, WPARAM wParam, LPARAM lParam);

DLGPROC GoToProcReg(HWND hwndDlg, UINT message, WPARAM wParam, LPARAM lParam);

DLGPROC GoToProcInfo(HWND hwndDlg, UINT message, WPARAM wParam, LPARAM lParam);

DLGPROC GoToProcManual(HWND hwndDlg, UINT message, WPARAM wParam, LPARAM lParam);

DLGPROC GoToProcLisen(HWND hwndDlg, UINT message, WPARAM wParam, LPARAM lParam);

DLGPROC GoToProcSetting(HWND hwndDlg, UINT message, WPARAM wParam, LPARAM lParam);

DLGPROC GoToProcDebug(HWND hwndDlg, UINT message, WPARAM wParam, LPARAM lParam);

DLGPROC GoToProcPlanirovshik(HWND hwndDlg, UINT message, WPARAM wParam, LPARAM lParam);

DLGPROC GoToProcToolTips(HWND hwndDlg, UINT message, WPARAM wParam, LPARAM lParam);

DLGPROC GoToProcToolWelcome(HWND hwndDlg, UINT message, WPARAM wParam, LPARAM lParam);

DLGPROC GoToProcFrame(HWND hwndDlg, UINT message, WPARAM wParam, LPARAM lParam);

LRESULT CALLBACK WndProc(HWND, UINT, WPARAM, LPARAM);

#define TEXT_COLOR RGB(180, 180, 180)

#define TEXT_COLOR_INFO RGB(30, 30, 30)

#define FON_BG RGB(30, 30, 30)

#define FON_BG_RECT RGB(180, 180, 180)

#define FON_BG_INFO RGB(30, 30, 30)

wstring hPatchGlobalForScripts = L" ";

WNDCLASSEXW wcex = { 0 };

HCURSOR hFinger;

HWND hWndReg;

HWND hWndInfo;

HWND hWndInfoManual;

HWND hWndInfoLisen;

HWND hWndInfoSetting;

HWND hWndDlgTmp;

HWND hwndTip;

HWND hwndTip_0;

HWND hwndTip_1;

HWND sliderBar;

HWND hWndDebug;

HWND hwndList;

HWND hwndPlanirovshik;

HWND hwndFrame;

HWND hWnd_net;

RECT glRect = { 0 };

HBRUSH hbrush;

HBITMAP hBitmap[40];

HWND hPic;

UINT cur_Item = 0;

UINT cur_Item_Key = 48;

UINT cur_Item_Random = 0;

bool a = false;

bool b = false;

bool c = false;

bool d = false;

bool h = false;

bool hRandomFlag = false;

bool human = false;

bool click = false;

bool modeSleep = false;

bool leftButtonEx = false;

bool rightButtonEx = false;

bool InfiniteWork = false;

bool shutDown = false;

bool topMost = false;

bool VISIBLEpODLO = false;

int curNumb = 0;

long szTime;

HANDLE hThreads[THREADS_NUMBER];

HANDLE hThreadsPlan;

bool ext = true;

#pragma comment(lib,"ws2_32.lib")

enum vKey : UINT
{
	KEY_0 = 48,
	KEY_1,
	KEY_2,
	KEY_3,
	KEY_4,
	KEY_5,
	KEY_6,
	KEY_7,
	KEY_8,
	KEY_9,

	KEY_A = 65,
	KEY_B,
	KEY_C,
	KEY_D,
	KEY_E,
	KEY_F,
	KEY_G,
	KEY_H,
	KEY_I,
	KEY_J,
	KEY_K,
	KEY_L,
	KEY_M,
	KEY_N,
	KEY_O,
	KEY_P,
	KEY_Q,
	KEY_R,
	KEY_S,
	KEY_T,
	KEY_U,
	KEY_V,
	KEY_W,
	KEY_X,
	KEY_Y,
	KEY_Z,

	KEY_NUMPAD_0 = 96,
	KEY_NUMPAD_1,
	KEY_NUMPAD_2,
	KEY_NUMPAD_3,
	KEY_NUMPAD_4,
	KEY_NUMPAD_5,
	KEY_NUMPAD_6,
	KEY_NUMPAD_7,
	KEY_NUMPAD_8,
	KEY_NUMPAD_9,

	KEY_F1 = 112,
	KEY_F2,
	KEY_F3,
	KEY_F4,
	KEY_F5,
	KEY_F6,
	KEY_F7,
	KEY_F8,
	KEY_F9,
	KEY_F10,
	KEY_F11,
	KEY_F12,

	KEY_SHIFT_LEFT = 160,
	KEY_CTRL_LEFT = 162,
	KEY_ALT_LEFT = 18,
	KEY_SHIFT_RIGHT = 161,
	KEY_CTRL_RIGHT = 163,
	KEY_ALT_RIGHT = 18,
	KEY_SPACE = 32,

	KEY_ENTER = 13,
	KEY_TAB = 9,
	KEY_BACKSPACE = 8,

	KEY_INSERT = 45,
	KEY_DELETE,
	KEY_ARROW_RIGHT = 39,
	KEY_ARROW_LEFT = 37,
	KEY_ARROW_DOWN = 40,
	KEY_ARROW_UP = 38,
	KEY_PAGE_UP = 33,
	KEY_PAGE_DOWN,
	KEY_HOME = 36,
	KEY_END = 35,

	KEY_CAPS_LOCK = 20,
	KEY_SCROLL_LOCK = 145,
	KEY_NUM_LOCK = 144,
	KEY_PRINT_SCREEN = 44,
	KEY_PAUSE = 19,

	KEY_COV_LEFT = 219,
	KEY_COV_RIGHT = 221,

	KEY_CODE_DVOETOCHIE = 186,

	KEY_CODE_KAVICHKI = 222,

	KEY_CODE_ARROW_LEFT = 188,
	KEY_CODE_ARROW_RIGHT = 190,
	KEY_CODE_SHLASH_AND_POINT,
	KEY_CODE_LEFT_CORNER
};

std::vector<vKey> vtable =
{
	{ vKey::KEY_0},
	{ vKey::KEY_1},
	{ vKey::KEY_2},
	{ vKey::KEY_3},
	{ vKey::KEY_4},
	{ vKey::KEY_5},
	{ vKey::KEY_6},
	{ vKey::KEY_7},
	{ vKey::KEY_8},
	{ vKey::KEY_9},
	{ vKey::KEY_A},
	{ vKey::KEY_B},
	{ vKey::KEY_C},
	{ vKey::KEY_D},
	{ vKey::KEY_E},
	{ vKey::KEY_F},
	{ vKey::KEY_G},
	{ vKey::KEY_H},
	{ vKey::KEY_I},
	{ vKey::KEY_J},
	{ vKey::KEY_K},
	{ vKey::KEY_L},
	{ vKey::KEY_M},
	{ vKey::KEY_N},
	{ vKey::KEY_O},
	{ vKey::KEY_P},
	{ vKey::KEY_Q},
	{ vKey::KEY_R},
	{ vKey::KEY_S},
	{ vKey::KEY_T},
	{ vKey::KEY_U},
	{ vKey::KEY_V},
	{ vKey::KEY_W},
	{ vKey::KEY_X},
	{ vKey::KEY_Y},
	{ vKey::KEY_Z},
	{ vKey::KEY_NUMPAD_0},
	{ vKey::KEY_NUMPAD_1},
	{ vKey::KEY_NUMPAD_2},
	{ vKey::KEY_NUMPAD_3},
	{ vKey::KEY_NUMPAD_4},
	{ vKey::KEY_NUMPAD_5},
	{ vKey::KEY_NUMPAD_6},
	{ vKey::KEY_NUMPAD_7},
	{ vKey::KEY_NUMPAD_8},
	{ vKey::KEY_NUMPAD_9},
	{ vKey::KEY_F1},
	{ vKey::KEY_F2},
	{ vKey::KEY_F3},
	{ vKey::KEY_F4},
	{ vKey::KEY_F5},
	{ vKey::KEY_F6},
	{ vKey::KEY_F7},
	{ vKey::KEY_F8},
	{ vKey::KEY_F9},
	{ vKey::KEY_F10},
	{ vKey::KEY_F11},
	{ vKey::KEY_F12},
	{ vKey::KEY_SHIFT_LEFT},
	{ vKey::KEY_CTRL_LEFT},
	{ vKey::KEY_ALT_LEFT},
	{ vKey::KEY_SHIFT_RIGHT},
	{ vKey::KEY_CTRL_RIGHT},
	{ vKey::KEY_ALT_RIGHT},
	{ vKey::KEY_SPACE},
	{ vKey::KEY_ENTER},
	{ vKey::KEY_TAB},
	{ vKey::KEY_BACKSPACE},
	{ vKey::KEY_INSERT},
	{ vKey::KEY_DELETE},
	{ vKey::KEY_ARROW_RIGHT},
	{ vKey::KEY_ARROW_LEFT},
	{ vKey::KEY_ARROW_DOWN},
	{ vKey::KEY_ARROW_UP},
	{ vKey::KEY_PAGE_UP},
	{ vKey::KEY_PAGE_DOWN},
	{ vKey::KEY_HOME},
	{ vKey::KEY_END},
	{ vKey::KEY_CAPS_LOCK},
	{ vKey::KEY_SCROLL_LOCK},
	{ vKey::KEY_NUM_LOCK},
	{ vKey::KEY_PRINT_SCREEN},
	{ vKey::KEY_PAUSE},
	{ vKey::KEY_COV_LEFT},
	{ vKey::KEY_COV_RIGHT},
	{ vKey::KEY_CODE_DVOETOCHIE},
	{ vKey::KEY_CODE_KAVICHKI},
	{ vKey::KEY_CODE_ARROW_LEFT},
	{ vKey::KEY_CODE_ARROW_RIGHT},
	{ vKey::KEY_CODE_SHLASH_AND_POINT},
	{ vKey::KEY_CODE_LEFT_CORNER}
};

struct main {

	int x, y;

	UINT code;

	bool leftButton;

	bool rightButton;

	bool key_state;

};

vector<main>vii;

vector<main>store;

set<main>store_set;

#define M_PI 3.14159265358979323846

#ifndef _DEPRECATION_DISABLE   /* One time only */
#define _DEPRECATION_DISABLE   /* Disable deprecation true */
#if (_MSC_VER >= 1400)         /* Check version */
#pragma warning(disable: 4996) /* Disable deprecation */
#endif /* #if defined(NMEA_WIN) && (_MSC_VER >= 1400) */
#endif /* #ifndef _DEPRECATION_DISABLE */

#define IDT_TIMER1 251082

HBRUSH hbrushForDialog, hbrushForRect, hBrushRed, hBrushFramrDlg;

HINSTANCE hinstLib;

typedef void (*MYPROC)(const wchar_t);

typedef void (*MYPROCSH)();

typedef void (*MYPROCSHEDIT)();

typedef void (*MYPROCSHEDITSTR)(const wchar_t*);

typedef void (*MYPROCINITREMOVETRACES)();

typedef void (*MYPROCINITREMOVETRACES1)(HANDLE);

MYPROCSH ProcAddSh;

MYPROCSHEDIT Start, PlayScipt;

MYPROCSHEDITSTR EditShow;

MYPROCINITREMOVETRACES InitTraces;

MYPROCINITREMOVETRACES1 ShowTraces;

bool on = false;

bool onEdit = false;

double scaleX;

double scaleY;

#define SCALEX(argX) ((int) ((argX) * scaleX))

#define SCALEY(argY) ((int) ((argY) * scaleY))

RECT hRectMainW = {0};

int imgGlobalX;

int imgGlobalY;

UINT stop_absolute;

DWORD *this_tools = nullptr;

DWORD* this_toolsTips = nullptr;

DWORD* this_toolsTips_0 = nullptr;

DWORD* this_toolsTipsLiteVers = nullptr;

DWORD* this_toolsTipsWelcome = nullptr;

DWORD* this_Header = nullptr;

DWORD* this_HeaderButtons = nullptr;

DWORD* this_HeaderButtonsTemps = nullptr;

DWORD* networks_config = nullptr;

int bmpW;

int bmpH;

int bmpWelcome;

int bmpHbmpWelcome;

int headerW;

int headerH;

int headerButtonsW;

int headerButtonsH;

int headerButtonsLeftCaptureW;

int headerButtonsLeftCaptureH;

int netw_config_w;

int netw_config_h;

std::vector<string> vtable_show_msg =
{
	" vKey::KEY_0",
	" vKey::KEY_1",
	" vKey::KEY_2",
	" vKey::KEY_3",
	" vKey::KEY_4",
	" vKey::KEY_5",
	" vKey::KEY_6",
	" vKey::KEY_7",
	" vKey::KEY_8",
	" vKey::KEY_9",
	" vKey::KEY_A",
	" vKey::KEY_B",
	" vKey::KEY_C",
	" vKey::KEY_D",
	" vKey::KEY_E",
	" vKey::KEY_F",
	" vKey::KEY_G",
	" vKey::KEY_H",
	" vKey::KEY_I",
	" vKey::KEY_J",
	" vKey::KEY_K",
	" vKey::KEY_L",
	" vKey::KEY_M",
	" vKey::KEY_N",
	" vKey::KEY_O",
	" vKey::KEY_P",
	" vKey::KEY_Q",
	" vKey::KEY_R",
	" vKey::KEY_S",
	" vKey::KEY_T",
	" vKey::KEY_U",
	" vKey::KEY_V",
	" vKey::KEY_W",
	" vKey::KEY_X",
	" vKey::KEY_Y",
	" vKey::KEY_Z",
	" vKey::KEY_F1",
	" vKey::KEY_F2",
	" vKey::KEY_F3",
	" vKey::KEY_F4",
	" vKey::KEY_F5",
	" vKey::KEY_F6",
	" vKey::KEY_F7",
	" vKey::KEY_F8",
	" vKey::KEY_F9",
	" vKey::KEY_F10",
	" vKey::KEY_F11",
	" vKey::KEY_F12",
	" vKey::KEY_ESC"
};


UINT StartPlayProg = 0;

UINT pressLeftButtonMouse = 0;

UINT pressRightButtonMouse = 0;

UINT findWindowByName = 0;

UINT xPosGetPlan = 0;

UINT yPosGetPlan = 0;

UINT xPosGetPlanDelta = 0;

UINT yPosGetPlanDelta = 0;

UINT timeHour = 0;

UINT timeMinute = 0;

UINT delayShowWindows = 0;

UINT startBotMessag = 0;

UINT startDirectiveMessag = 0;

wchar_t bufStartProgram[1000];

wchar_t bufaboutWin[1000];

wchar_t bufaboutWinForCompar[1000];

char timeHr[10];

char timeMi[10];

bool enterBlockStartProg = false;

bool enterBlockFindWindow = false;

bool enterBlockFindWindowSendMessage = false;

UINT countStartThr = 0;

UINT countMainWindowForStartProgram = 0;

UINT curItemBind = 0;

UINT curItemVariosTime = 0;

bool ItemBindStart = false;

bool ItemBindStartInsert = true;

UINT bindAbsolute = 0;

bool leftOver = false;

bool righOver = false;

#define DELAY_TOP_MSG 7273

//#define MARGIN_LEFT 5

//#define MARGIN_RIGHT 10

#define MARGIN_LEFT 38

#define MARGIN_RIGHT 43

#define MARGIN_TOP 35

int left_panel_tools_X;

int left_panel_tools_Y;

int left_panel_toolsBG_X;

int left_panel_toolsBG_Y;

DWORD* pointLPT;

DWORD* pointLPTBG;

enum vITEMLM : UINT
{
	ONE_ITEM = 35,

	TWO_ITEM = 63,

	THREE_ITEM = 90,

	FOUR_ITEM = 119,

	FIVE_ITEM = 147,

	SIX_ITEM = 183,

	SEVEN_ITEM = 219,

	EIGHT_ITEM = 247,

	NINE_ITEM = 276,

	TEN_ITEM = 303,

	ELEVEN_ITEM = 331,

	TWELVE_ITEM = 359,

	THIRTEEN_ITEM = 387,

	FOURTEEN_ITEM = 423
};

bool buf_left_p = false;

int yTopPanel_tools = 0;

int yBottomPanel_tools = 0;


