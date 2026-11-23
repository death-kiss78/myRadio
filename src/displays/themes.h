#ifndef myRadio_themes_h
#define myRadio_themes_h

#include <stdint.h>

// Theme Designer: https://vip-cxema.org/index.php/online-kalkulyatory/yoradio-redaktor-tem
// Can mostly be used to feed the theme_tool.py script but the clock screensaver colors
// will need manual adjustment: clockss, clockbgss, secondsss, dowss, datess

struct ThemeData {
  uint16_t background;
  uint16_t meta;
  uint16_t metabg;
  uint16_t title1;
  uint16_t title2;
  uint16_t digit;
  uint16_t digitbg;
  uint16_t div;
  uint16_t line;
  uint16_t weather;
  uint16_t vuaxis;
  uint16_t vupeak;
  uint16_t vumax;
  uint16_t vumin;
  uint16_t clock;
  uint16_t clockbg;
  uint16_t seconds;
  uint16_t secondsbg;
  uint16_t dow;
  uint16_t date;
  uint16_t clockss;
  uint16_t clockbgss;
  uint16_t secondsss;
  uint16_t secondsbgss;
  uint16_t dowss;
  uint16_t datess;
  uint16_t textss;
  uint16_t buffer;
  uint16_t ip;
  uint16_t vol;
  uint16_t rssi;
  uint16_t battery;
  uint16_t bitrate;
  uint16_t volbarout;
  uint16_t volbarin;
  uint16_t plcurrent;
  uint16_t plcurrentbg;
  uint16_t playlist[5];
};

#define RGB(r, g, b) ((uint16_t)(((r) >> 3) << 11) | ((uint16_t)((g) >> 2) << 5) | ((uint16_t)(b) >> 3))

const char _themeNames[][64] PROGMEM = {
    "Default",
    "Rainbow",
    "Colorful",
};

// Theme element keys and their labels - used by the WebUI editor
struct ThemeElementName {
  const char* key;
  const char* label;
};

const ThemeElementName _themeElementNames[] PROGMEM = {
    { ".background",    "Background" },
    { ".meta",          "Meta Text" },
    { ".metabg",        "Meta Background" },
    { ".title1",        "Title 1" },
    { ".title2",        "Title 2" },
    { ".digit",         "Digits (Volume, IR)" },
    { ".digitbg",       "Digits Background (Glow)" },
    { ".div",           "Divider in Full Time" },
    { ".line",          "Divider Lines" },
    { ".weather",       "Weather Text" },
    { ".vuaxis",        "VU Axis Line" },
    { ".vupeak",        "VU Peak Bars" },
    { ".vumax",         "VU Maximum" },
    { ".vumin",         "VU Minimum" },
    { ".clock",         "Clock" },
    { ".clockbg",       "Clock Background (Glow)" },
    { ".seconds",       "Seconds" },
    { ".secondsbg",     "Seconds Background (Glow)" },
    { ".dow",           "Day of Week" },
    { ".date",          "Date" },
    { ".clockss",       "Screensaver - Clock" },
    { ".clockbgss",     "Screensaver - Clock Background (Glow)" },
    { ".secondsss",     "Screensaver - Seconds" },
    { ".secondsbgss",   "Screensaver - Seconds Background (Glow)" },
    { ".dowss",         "Screensaver - Day of Week" },
    { ".datess",        "Screensaver - Date" },
    { ".textss",        "Screensaver - Info Text" },
    { ".buffer",        "Buffer Bar" },
    { ".ip",            "IP" },
    { ".vol",           "Volume Text" },
    { ".rssi",          "RSSI (Wi-fi Signal)" },
    { ".battery",       "Battery" },
    { ".bitrate",       "Bitrate" },
    { ".volbarout",     "Volume Bar Outside" },
    { ".volbarin",      "Volume Bar Inside" },
    { ".plcurrent",     "Playlist - Current" },
    { ".plcurrentbg",   "Playlist - Current Background" },
    { ".playlist[0]",   "Playlist - 0 (Nearest Current)" },
    { ".playlist[1]",   "Playlist - 1 (Next to 0)" },
    { ".playlist[2]",   "Playlist - 2 (Next to 1)" },
    { ".playlist[3]",   "Playlist - 3 (Next to 2)" },
    { ".playlist[4]",   "Playlist - 4 (Next to 3)" },
};

// The Themes

const ThemeData _themes[] PROGMEM = {
    {   // Default
        .background    = RGB(  0,   0,   0),
        .meta          = RGB(240, 244, 240),
        .metabg        = RGB(  0,  60, 200),
        .title1        = RGB(232, 236, 232),
        .title2        = RGB(200, 204, 200),
        .digit         = RGB(248,  28,   0),
        .digitbg       = RGB( 32,   4,   0),
        .div           = RGB( 88,  88,  88),
        .line          = RGB( 88,  88,  88),
        .weather       = RGB(232, 236, 232),
        .vuaxis        = RGB( 64,  64,  64),
        .vupeak        = RGB(232, 236, 232),
        .vumax         = RGB(248,  28,   0),
        .vumin         = RGB(  0,  60, 200),
        .clock         = RGB(248,  28,   0),
        .clockbg       = RGB( 32,   4,   0),
        .seconds       = RGB(240,  28,   0),
        .secondsbg     = RGB( 32,   4,   0),
        .dow           = RGB(248, 192, 192),
        .date          = RGB(192, 192, 248),
        .clockss       = RGB(192, 192, 248),
        .clockbgss     = RGB( 16,  16,  32),
        .secondsss     = RGB(192, 192, 248),
        .secondsbgss   = RGB( 16,  16,  32),
        .dowss         = RGB(152, 152, 176),
        .datess        = RGB(192, 152, 152),
        .textss        = RGB(232, 236, 232),
        .buffer        = RGB(  0,  60, 200),
        .ip            = RGB(192, 192, 248),
        .vol           = RGB(248, 192, 192),
        .rssi          = RGB(192, 192, 248),
        .battery       = RGB(192, 192, 248),
        .bitrate       = RGB(248, 192, 192),
        .volbarout     = RGB(192,  96,  96),
        .volbarin      = RGB(248, 192, 192),
        .plcurrent     = RGB(248, 252, 248),
        .plcurrentbg   = RGB(248,  28,   0),
        .playlist      = {RGB(224, 224, 224), RGB(192, 192, 192), RGB(160, 160, 160), RGB(128, 128, 128), RGB( 96,  96,  96)},
    },
    {   // Rainbow
        .background    = RGB(0, 0, 0),
        .meta          = RGB(176, 176, 168),
        .metabg        = RGB(168, 16, 120),
        .title1        = RGB(88, 120, 16),
        .title2        = RGB(176, 184, 24),
        .digit         = RGB(96, 96, 192),
        .digitbg       = RGB(32, 32, 32),
        .div           = RGB(112, 112, 112),
        .line          = RGB(104, 0, 104),
        .weather       = RGB(0, 172, 168),
        .vuaxis        = RGB(64, 64, 72),
        .vupeak        = RGB(232, 232, 232),
        .vumax         = RGB(224, 16, 16),
        .vumin         = RGB(0, 204, 24),
        .clock         = RGB(96, 96, 192),
        .clockbg       = RGB(32, 32, 32),
        .seconds       = RGB(192, 108, 192),
        .secondsbg     = RGB(32, 32, 32),
        .dow           = RGB(208, 132, 0),
        .date          = RGB(168, 180, 32),
        .clockss       = RGB(96, 96, 192),
        .clockbgss     = RGB(32, 32, 32),
        .secondsss     = RGB(96, 96, 192),
        .secondsbgss   = RGB(32, 32, 32),
        .dowss         = RGB(176, 176, 176),
        .datess        = RGB(176, 176, 176),
        .textss        = RGB(128, 128, 128),
        .buffer        = RGB(104, 104, 112),
        .ip            = RGB(192, 68, 192),
        .vol           = RGB(24, 144, 48),
        .rssi          = RGB(192, 68, 192),
        .battery       = RGB(192, 68, 192),
        .bitrate       = RGB(168, 180, 32),
        .volbarout     = RGB(128,   0, 128),
        .volbarin      = RGB( 96,  96, 192),
        .plcurrent     = RGB(184, 184, 192),
        .plcurrentbg   = RGB( 80,  80,  88),
        .playlist      = {RGB(144, 144, 152), RGB(104, 104, 112), RGB( 64,  64,  72), RGB( 48,  48,  56), RGB( 32,  32,  40)},
    },
    {   // Colorful
        .background    = RGB(  0,   0,   0),
        .meta          = RGB(248, 252, 248),
        .metabg        = RGB(  0,   0, 248),
        .title1        = RGB(248, 252,   0),
        .title2        = RGB(248,   0, 248),
        .digit         = RGB( 96, 100, 248),
        .digitbg       = RGB(  8,  12,  32),
        .div           = RGB(248, 252, 248),
        .line          = RGB(248, 252, 248),
        .weather       = RGB(  0, 252,   0),
        .vuaxis        = RGB( 56,  60,  56),
        .vupeak        = RGB(248, 252,   0),
        .vumax         = RGB(248,   0,   0),
        .vumin         = RGB(  0,   0, 248),
        .clock         = RGB(248, 252, 248),
        .clockbg       = RGB( 24,  24,  24),
        .seconds       = RGB(248, 252,   0),
        .secondsbg     = RGB( 24,  24,  24),
        .dow           = RGB(248,   0, 200),
        .date          = RGB(104, 116, 248),
        .clockss       = RGB(120, 124, 120),
        .clockbgss     = RGB( 16,  16,  16),
        .secondsss     = RGB(120, 124,   0),
        .secondsbgss   = RGB( 16,  16,  16),
        .dowss         = RGB(120,   0,  96),
        .datess        = RGB( 48,  56, 120),
        .textss        = RGB(120, 124, 120),
        .buffer        = RGB(152,   0,  72),
        .ip            = RGB(  0, 252,   0),
        .vol           = RGB(248,   0,   0),
        .rssi          = RGB(248, 252,   0),
        .battery       = RGB(248, 252,   0),
        .bitrate       = RGB(  0, 252, 248),
        .volbarout     = RGB(248,   0,   0),
        .volbarin      = RGB(248, 252,   0),
        .plcurrent     = RGB(  0,   0,   0),
        .plcurrentbg   = RGB( 88, 116, 248),
        .playlist      = {RGB(248, 252, 248), RGB(200, 204, 200), RGB(128, 132, 128), RGB( 80,  84,  80), RGB( 40,  44,  40)},
    },
};

#define THEME_ELEMENT_COUNT (sizeof(_themeElementNames) / sizeof(_themeElementNames[0]))

static_assert(sizeof(ThemeData) / sizeof(uint16_t) == THEME_ELEMENT_COUNT,
              "ThemeData changed shape: add or remove the matching _themeElementNames entry.");

#endif
