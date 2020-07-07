#include "basit_konsol.h"

void gotoxy(int x, int y) 
{ 
    COORD pos = {x, y};
    HANDLE output = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleCursorPosition(output, pos);
}

void change_color (int background, int foreground)
{
	char format[255];
	
	sprintf (format, "COLOR %x%x" , background , foreground);
	system (format );  	
}

void change_text_color (int color=FOREGROUND_RED)
{
	SetConsoleTextAttribute( GetStdHandle(STD_OUTPUT_HANDLE ), color );
}

void change_background_color (int color)
{
	char format[255];
	
	sprintf (format, "COLOR %x" , color);
	system (format );  
}
