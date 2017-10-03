#include "Main.h"

void gotoxy(int xpos, int ypos)
{
  COORD scrn;    
  HANDLE hOuput = GetStdHandle(STD_OUTPUT_HANDLE);
  scrn.X = xpos-1; scrn.Y = ypos-1;
  SetConsoleCursorPosition(hOuput,scrn);
}

void blinking(int off=99)// MEPYAHUE y5PATb
{   CONSOLE_CURSOR_INFO cci;
    cci.dwSize=off;
    cci.bVisible=false;
    SetConsoleCursorInfo(hCon,&cci);
}

void prepare() {
	system("mode con cols=45 lines=70");
	blinking();
}