#ifndef BASIT_KONSOL_H
#define BASIT_KONSOL_H

#include <windows.h>
#include <string.h>
#include <stdio.h>

void gotoxy(int x, int y);
void change_color (int background, int foreground);
void change_text_color (int color);
void change_background_color (int color);
/*
Color Codes:
0 = Black
1 = Blue
2 = Green
3 = Aqua
4 = Red
5 = Purple
6 = Yellow
7 = White
8 = Gray
9 = Light Blue
A = Light Green
B = Light Aqua
C = Light Red
D = Light Purple
E = Light Yellow
F = Bright White
*/
#endif
