#include <iostream>
#include "point.h"
#include <conio.h>
using namespace std;

int main(){
    Point p;
    p.set_coordinates(6,12);
    p.draw();
    getch();
    return 0;
}
