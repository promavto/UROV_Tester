#ifndef _TFTSETTINGS_H
#define _TFTSETTINGS_H
//------------------------------------------------------------------------------------------------------------------------------------------------------------------------
// НАСТРОЙКИ TFT
//------------------------------------------------------------------------------------------------------------------------------------------------------------------------
extern uint8_t BigRusFont[];               // какой шрифт используем
extern uint8_t SmallRusFont[];             // какой шрифт используем
extern uint8_t SmallSymbolFont[];          // какой шрифт используем
extern uint8_t MySevenSegNumFont[];          // какой шрифт используем
extern uint8_t Various_Symbols_16x32[];    // какой шрифт используем
extern uint8_t Various_Symbols_32x32[];    // какой шрифт используем

//------------------------------------------------------------------------------------------------------------------------------------------------------------------------
#define TFT_FONT BigRusFont // тут подставляем имя шрифта, который используем
//------------------------------------------------------------------------------------------------------------------------------------------------------------------------
#define TFT_BUTTON_COLORS VGA_WHITE, VGA_GRAY, VGA_WHITE, VGA_RED, VGA_BLUE // цвета для кнопок
#define TFT_BUTTON_COLORS2 VGA_WHITE, VGA_GRAY, VGA_WHITE, VGA_RED, 0x4DC9 // цвета для кнопок
#define TFT_BACK_COLOR VGA_BLACK // цвет заливки экрана
//------------------------------------------------------------------------------------------------------------------------------------------------------------------------
// TFT model
#define TFT_MODEL R61581   // Дисплей 320х480. 3,5-дюймовый 37PIN TFT LCD резистивный сенсорный экран ILI9488 Привод IC 320(RGB) * 480 QVGA
//------------------------------------------------------------------------------------------------------------------------------------------------------------------------
//------------------------------------------------------------------------------------------------------------------------------------------------------------------------
// TFT RS pin
#define TFT_RS_PIN 38
//------------------------------------------------------------------------------------------------------------------------------------------------------------------------
// TFT WR pin
#define TFT_WR_PIN 39
//------------------------------------------------------------------------------------------------------------------------------------------------------------------------
// TFT CS pin
#define TFT_CS_PIN 40
//------------------------------------------------------------------------------------------------------------------------------------------------------------------------
// TFT RST pin
#define TFT_RST_PIN 41
//------------------------------------------------------------------------------------------------------------------------------------------------------------------------
///------------------------------------------------------------------------------------------------------------------------------------------------------------------------
// touch settings
// настройки тачскрина
//------------------------------------------------------------------------------------------------------------------------------------------------------------------------
#define TFT_TOUCH_CLK_PIN 6
#define TFT_TOUCH_CS_PIN 5
#define TFT_TOUCH_DIN_PIN 4
#define TFT_TOUCH_DOUT_PIN 3
#define TFT_TOUCH_IRQ_PIN 2
//------------------------------------------------------------------------------------------------------------------------------------------------------------------------
#define TFT_INIT_DELAY 200 // сколько миллисекунд (при необходимости) ждать перед отсылкой первых команд на дисплей
//------------------------------------------------------------------------------------------------------------------------------------------------------------------------
#define TFT_ORIENTATION LANDSCAPE // ориентация экрана
//------------------------------------------------------------------------------------------------------------------------------------------------------------------------
#define TOUCH_PRECISION PREC_HI // чувствительность тача
//------------------------------------------------------------------------------------------------------------------------------------------------------------------------
#endif