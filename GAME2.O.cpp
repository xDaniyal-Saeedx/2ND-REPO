#include <iostream>
using namespace std;
#include <windows.h>

void maze();
void gotoxy(int x, int y);
void moveH(int x, int y);
void moveV(int x, int y);
void moveD(int x, int y);

main()
{

while(true){
{

int x = 1,y = 20;
char direction;
cout << "Enter direction (H for horizontal, V for vertical),D for diagonal: ";
cin >> direction;
system("cls");
maze();

if (direction=='h')
{
    moveH(x,y);
}
else if (direction=='v')
{
    moveV(x,y);
}
else if (direction=='d')
{
    moveD(x,y);
}
}
gotoxy(0,23);
}

}
void maze()
{
cout << "############################################" << endl;
cout << "#                                          #" << endl;
cout << "#                                          #" << endl;
cout << "#                                          #" << endl;
cout << "#                                          #" << endl;
cout << "#                                          #" << endl;
cout << "#                                          #" << endl;
cout << "#                                          #" << endl;
cout << "#                                          #" << endl;
cout << "#                                          #" << endl;
cout << "#                                          #" << endl;
cout << "#                                          #" << endl;
cout << "#                                          #" << endl;
cout << "#                                          #" << endl;
cout << "#                                          #" << endl;
cout << "#                                          #" << endl;
cout << "#                                          #" << endl;
cout << "#                                          #" << endl;
cout << "#                                          #" << endl;
cout << "#                                          #" << endl;
cout << "#                                          #" << endl;
cout << "############################################" << endl;

}

void gotoxy(int x, int y)
{
    COORD coordinates;
    coordinates.X = x;
    coordinates.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);



}

void moveH(int x, int y)
{
    while(x < 42)
    {
        gotoxy(x,y);
        cout << "P";
        Sleep(100);
        gotoxy(x,y);
        cout << " ";
        x++;
        
    }
}
void moveV(int x, int y)
{
    while(y > 0) 
    {
        gotoxy(x,y);
        cout << "P";
        Sleep(100);
        gotoxy(x,y);
        cout << " ";
        y--;
        
    }
 
}
void moveD(int x, int y)
{
    while(x < 42 && y > 0)
    {
        gotoxy(x,y);
        cout << "P";
        Sleep(100);
        gotoxy(x,y);
        cout << " ";
        x = x + 2;
        y--; 

    }
}