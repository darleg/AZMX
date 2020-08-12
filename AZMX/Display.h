#include "oled.h"

class Display
{
public:
    Display();
    ~Display();
    void init();
    void clear();
    void DisplayOn();
    void DisplayOff();
    void ShowString(u8 x, u8 y, char *p);
};