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
    void ShowString(char *p);
};