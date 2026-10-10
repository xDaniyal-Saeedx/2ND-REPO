#include <iostream>
using namespace std;
#include <windows.h>

void maze();
void gotoxy(int x, int y);
void move(int x, int y);

main()
{
system("cls");
int x = 5,y = 5;
maze();
while(x<42)
{
move(x,y);
x = x + 1;
if(x==42)
{
    x=5,y=5;   
}

}

gotoxy(0,11);
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
	cout << "############################################" << endl;

}

void gotoxy(int x, int y)
{
    COORD coordinates;
    coordinates.X = x;
    coordinates.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);



}

void move(int x, int y)
{
    gotoxy(x,y);
    cout << "P";
    Sleep(100);
    gotoxy(x,y);
    cout << " ";
    }
