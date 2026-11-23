/*************************************************************************************
    TFT480x320 displays configuration file.
*************************************************************************************/

#ifndef displayTFT480x320conf_h
#define displayTFT480x320conf_h

#define TFT_BORDER      10
#define MAX_WIDTH       DSP_WIDTH-TFT_BORDER*2

#if defined(BIG_BOOT_LOGO) || BIG_BOOT_LOGO // true
  #define BOOTLOGOTOP   60
#else
  #define BOOTLOGOTOP   110
#endif

const BootData _bootConfig PROGMEM = {
        /* SCROLLS             {{ offset, top, fontsize, align }, width } */
        .apTitleConf         = {{ TFT_BORDER, TFT_BORDER, 4, WA_CENTER }, MAX_WIDTH },
        .apSettConf          = {{ TFT_BORDER, 320-TFT_BORDER-16, 2, WA_LEFT }, MAX_WIDTH },
        /* LINES + RECTANGLES  {{ offset, top, 0, 0 }, width, height, outlined } */
        .apTitleBGConf       = {{ 0, 0, 0, 0 }, DSP_WIDTH, 50, false },
        /* WIDGETS             { offset, top, fontsize, align } */
        .bootstrConf         = { 0, 243, 2, WA_CENTER },
        .apNameConf          = { TFT_BORDER, 88, 3, WA_CENTER },
        .apName2Conf         = { TFT_BORDER, 120, 3, WA_CENTER },
        .apPassConf          = { TFT_BORDER, 173, 3, WA_CENTER },
        .apPass2Conf         = { TFT_BORDER, 205, 3, WA_CENTER },
        .bootWdtConf         = { 0, 205, 2, WA_CENTER },
        /* BOOT PROGRESS       { frame interval, line character width, progress characters } */
        .bootPrgConf         = { 90, 14, 4 },
};

const char _layoutNames[][64] PROGMEM = {
    "Default",
    "Default (VU Rotated)",
    "BoomBox"
};

/* LAYOUT DEFINITIONS */

const LayoutData _layouts[] PROGMEM = {
    {   // Default
        /* SCROLLS             {{ offset, top, fontsize, align }, width } */
        .metaConf            = {{ TFT_BORDER, TFT_BORDER, 4, WA_LEFT }, MAX_WIDTH },
        .title1Conf          = {{ TFT_BORDER, 62, 2, WA_LEFT }, MAX_WIDTH-(44==0?6*2*7-6:44) },
        .title2Conf          = {{ TFT_BORDER, 86, 2, WA_LEFT }, MAX_WIDTH-44 },
        .playlistConf        = {{ TFT_BORDER, 146, 3, WA_LEFT }, MAX_WIDTH },
        .weatherConf         = {{ TFT_BORDER, 120, 2, WA_LEFT }, MAX_WIDTH },
        /* SLIDER BARS         {{ offset, top, 0, 0 }, width, height, outlined } */
        .volbarConf          = {{ TFT_BORDER, DSP_HEIGHT-TFT_BORDER-8, 0, 0 }, MAX_WIDTH, 8, true },
        .bufferbarConf       = {{ 0, DSP_HEIGHT-2, 0, 0 }, DSP_WIDTH, 2, false },
        /* LINES + RECTANGLES  {{ offset, top, 0, 0 }, width, height, outlined } */
        .metaBGConf          = {{ 0, 0, 0, 0 }, DSP_WIDTH, 50, false },
        .metaBGConfInv       = {{ 0, 50, 0, 0 }, DSP_WIDTH, 2, false },
        .underLineConf       = { }, // unused
        .overLineConf        = { }, // unused
        .playlBGConf         = {{ 0, 138, 0, 0 }, DSP_WIDTH, 36, false },
        /* WIDGETS             { offset, top, fontsize, align } */
        //.bitrateConf         = { 6, 62, 2, WA_RIGHT },
        .bitrateConf         = { }, // unused
        .voltxtConf          = { 0, DSP_HEIGHT-38, 2, WA_CENTER },
        .batteryConf         = { (DSP_WIDTH*2)/3+2, DSP_HEIGHT-38, 2, WA_LEFT },
        .iptxtConf           = { TFT_BORDER, DSP_HEIGHT-38, 2, WA_LEFT },
        .rssiConf            = { TFT_BORDER, DSP_HEIGHT-38-6, 3, WA_RIGHT },
        /* NUMBERS FONT        { offset, top, fontsize (1=15/10, 2=35/15, 3=52/21, 4=70/28), align } */
        .numConf             = { 0, 200, 4, WA_CENTER },
        .clockConf           = { TFT_BORDER*2, 230, 4, WA_RIGHT },
        /* VU BARS WIDGET      { offset, top, 0, align (WA_LEFT=default / WA_CENTER=boombox / WA_RIGHT=rotate 90) } */
        .vuConf              = { TFT_BORDER, 136, 0, WA_LEFT },
        /* CODEC BADGE         {{ offset, top, fontsize, align }, dimension} */
        .fullbitrateConf     = {{ DSP_WIDTH-TFT_BORDER-38, 59, 2, WA_LEFT }, 42 },
        /* VU BANDS            { onebandwidth, onebandheight, bandsHspace, bandsVspace, numofbands } */
        .bandsConf           = { 32, 130, 4, 2, 10 },
        /* MOVES               { left, top, width } */
        .clockMove           = { TFT_BORDER*2, 230, 0 },
        .weatherMove         = { TFT_BORDER, 120, MAX_WIDTH },
        .weatherMoveVU       = { 89, 120, MAX_WIDTH-89+TFT_BORDER },
        /* TRANSFORMS          boolean */
        .fullClock           = true, // the divider and the day/date column right of the time
        .seconds             = true, // the seconds block right of the time
        .shareWeatherIP      = false, // IP and weather share the same row
        .shareBattRSSI       = false, // RSSI and battery share the same row
        .rssiDigit           = false, // signal drawn as a number, not bars
    },
    {   // Default (VU Rotated)
        /* SCROLLS             {{ offset, top, fontsize, align }, width } */
        .metaConf            = {{ TFT_BORDER, TFT_BORDER, 4, WA_LEFT }, MAX_WIDTH },
        .title1Conf          = {{ TFT_BORDER, 62, 2, WA_LEFT }, MAX_WIDTH-(44==0?6*2*7-6:44) },
        .title2Conf          = {{ TFT_BORDER, 86, 2, WA_LEFT }, MAX_WIDTH-44 },
        .playlistConf        = {{ TFT_BORDER, 146, 3, WA_LEFT }, MAX_WIDTH },
        .weatherConf         = {{ TFT_BORDER, 120, 2, WA_LEFT }, MAX_WIDTH },
        /* SLIDER BARS         {{ offset, top, 0, 0 }, width, height, outlined } */
        .volbarConf          = {{ TFT_BORDER, DSP_HEIGHT-TFT_BORDER-8, 0, 0 }, MAX_WIDTH, 8, true },
        .bufferbarConf       = {{ 0, DSP_HEIGHT-2, 0, 0 }, DSP_WIDTH, 2, false },
        /* LINES + RECTANGLES  {{ offset, top, 0, 0 }, width, height, outlined } */
        .metaBGConf          = {{ 0, 0, 0, 0 }, DSP_WIDTH, 50, false },
        .metaBGConfInv       = {{ 0, 50, 0, 0 }, DSP_WIDTH, 2, false },
        .underLineConf       = { }, // unused
        .overLineConf        = { }, // unused
        .playlBGConf         = {{ 0, 138, 0, 0 }, DSP_WIDTH, 36, false },
        /* WIDGETS             { offset, top, fontsize, align } */
        //.bitrateConf         = { 6, 62, 2, WA_RIGHT },
        .bitrateConf         = { }, // unused
        .voltxtConf          = { 0, DSP_HEIGHT-38, 2, WA_CENTER },
        .batteryConf         = { (DSP_WIDTH*2)/3+2, DSP_HEIGHT-38, 2, WA_LEFT },
        .iptxtConf           = { TFT_BORDER, DSP_HEIGHT-38, 2, WA_LEFT },
        .rssiConf            = { TFT_BORDER, DSP_HEIGHT-38-6, 3, WA_RIGHT },
        /* NUMBERS FONT        { offset, top, fontsize (1=15/10, 2=35/15, 3=52/21, 4=70/28), align } */
        .numConf             = { 0, 200, 4, WA_CENTER },
        .clockConf           = { TFT_BORDER*2, 230, 4, WA_RIGHT },
        /* VU BARS WIDGET      { offset, top, 0, align (WA_LEFT=default / WA_CENTER=boombox / WA_RIGHT=rotate 90) } */
        .vuConf              = { TFT_BORDER, 161, 0, WA_RIGHT },
        /* CODEC BADGE         {{ offset, top, fontsize, align }, dimension} */
        .fullbitrateConf     = {{ DSP_WIDTH-TFT_BORDER-38, 59, 2, WA_LEFT }, 42 },
        /* VU BANDS            { onebandwidth, onebandheight, bandsHspace, bandsVspace, numofbands } */
        .bandsConf           = { 25, 130, 17, 3, 10 },
        /* MOVES               { left, top, width } */
        .clockMove           = { TFT_BORDER*2, 230, 0 },
        .weatherMove         = { TFT_BORDER, 120, MAX_WIDTH },
        .weatherMoveVU       = { TFT_BORDER, 120, MAX_WIDTH },
        /* TRANSFORMS          boolean */
        .fullClock           = true, // the divider and the day/date column right of the time
        .seconds             = true, // the seconds block right of the time
        .shareWeatherIP      = false, // IP and weather share the same row
        .shareBattRSSI       = false, // RSSI and battery share the same row
        .rssiDigit           = false, // signal drawn as a number, not bars
    },

    {   // BoomBox
        /* SCROLLS             {{ offset, top, fontsize, align }, width } */
        .metaConf            = {{ 10, 8, 4, WA_CENTER }, 460 },
        .title1Conf          = {{ 10, 205, 2, WA_CENTER }, 460 },
        .title2Conf          = {{ 10, 226, 2, WA_CENTER }, 460 },
        .playlistConf        = {{ 10, 146, 3, WA_LEFT }, 460 },
        .weatherConf         = {{ 10, 168, 2, WA_CENTER }, 460 },
        /* SLIDER BARS         {{ offset, top, 0, 0 }, width, height, outlined } */
        .volbarConf          = {{ 10, 308, 0, 0 }, 460, 5, true },
        .bufferbarConf       = {{ 0, 318, 0, 0 }, 480, 2, false },
        /* LINES + RECTANGLES  {{ offset, top, 0, 0 }, width, height, outlined } */
        .metaBGConf          = {{ 0, 0, 0, 0 }, 480, 50, false },
        .metaBGConfInv       = {{ 0, 50, 0, 0 }, 480, 2, false },
        .underLineConf       = {{ 0, 193, 0, 0 }, 480, 2, false },
        .overLineConf        = {{ 10, 63, 0, 0 }, 130, 70, true },
        .playlBGConf         = {{ 0, 138, 0, 0 }, 480, 36, false },
        /* WIDGETS             { offset, top, fontsize, align } */
        .bitrateConf         = { }, // unused
        .voltxtConf          = { 0, 289, 2, WA_CENTER },
        .batteryConf         = { 285, 289, 2, WA_LEFT },
        .iptxtConf           = { 10, 289, 2, WA_LEFT },
        .rssiConf            = { 10, 289, 2, WA_RIGHT },
        /* NUMBERS FONT        { offset, top, fontsize (1=15/10, 2=35/15, 3=52/21, 4=70/28), align } */
        .numConf             = { 0, 200, 4, WA_CENTER },
        .clockConf           = { 10, 133, 4, WA_RIGHT },
        /* VU BARS WIDGET      { offset, top, 0, align (WA_LEFT=default / WA_CENTER=boombox / WA_RIGHT=rotate 90) } */
        .vuConf              = { 38, 252, 0, WA_CENTER },
        /* CODEC BADGE         {{ offset, top, fontsize, align }, dimension} */
        .fullbitrateConf     = {{ 50, 72, 2, WA_RIGHT }, 52 },
        /* VU BANDS            { onebandwidth, onebandheight, bandsHspace, bandsVspace, numofbands } */
        .bandsConf           = { 200, 25, 4, 2, 20 },
        /* MOVES               { left, top, width } */
        .clockMove           = { 10, 133, 0 },
        .weatherMove         = { 10, 168, 0 },
        .weatherMoveVU       = { 10, 168, 0 },
        /* TRANSFORMS          boolean */
        .fullClock           = true, // the divider and the day/date column right of the time
        .seconds             = true, // the seconds block right of the time
        .shareWeatherIP      = false, // IP and weather share the same row
        .shareBattRSSI       = false, // RSSI and battery share the same row
        .rssiDigit           = true, // signal drawn as a number, not bars
    }

};


/* STRINGS */
const char numtxtFmt[]            PROGMEM = "%d";
const char rssiFmt[]              PROGMEM = "\021\022%d%%";
const char iptxtFmt[]             PROGMEM = "\021\022%s";
const char voltxtFmt[]            PROGMEM = "%d";
const char batterytxtFmt[]        PROGMEM = "%d%%";
const char bitrateFmt[]           PROGMEM = "%d kBs";

#endif
