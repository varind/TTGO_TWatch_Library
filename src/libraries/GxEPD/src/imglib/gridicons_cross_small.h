#if defined(ESP8266) || defined(ESP32)
#include <pgmspace.h>
#else
#include <avr/pgmspace.h>
#endif
// 24 x 24 gridicons_cross_small
const unsigned char gridicons_cross_small[] PROGMEM = { /* 0X01,0X01,0XB4,0X00,0X40,0X00, */
0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFC, 0x7E, 0x3F, 
0xFE, 0x3C, 0x7F, 0xFF, 0x18, 0xFF, 0xFF, 0x81, 
0xFF, 0xFF, 0xC3, 0xFF, 0xFF, 0xC3, 0xFF, 0xFF, 
0x81, 0xFF, 0xFF, 0x18, 0xFF, 0xFE, 0x3C, 0x7F, 
0xFC, 0x7E, 0x3F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF
};
