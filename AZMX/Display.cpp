#include "Display.h"

Display::Display() {
}
Display::~Display() {
}
void Display::init() {
    OLED_Init();
    OLED_Clear();
}
void Display::clear() {
    OLED_Clear();
}
void Display::DisplayOn() {
    OLED_Display_On();
}
void Display::DisplayOff() {
    OLED_Display_Off();
}

void Display::ShowString(u8 x, u8 y, char *p) {   
    OLED_ShowString(x, y, p);
}