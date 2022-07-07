#include <iostream>
#include <windows.h>
#include <conio.h>

using namespace std;
#define ARRIBA 72
#define IZQUIERDA 75
#define DERECHA 77
#define ABAJO 80

void gotoxy(int x, int y)
{
	HANDLE hCon;
	hCon= GetStdHandle(STD_OUTPUT_HANDLE);
	COORD dwPos;
	dwPos.X = x;
	dwPos.Y = y;
	SetConsoleCursorPosition(hCon, dwPos);
}
void HideCursor()
{
	HANDLE hCon;
	hCon= GetStdHandle(STD_OUTPUT_HANDLE);
	CONSOLE_CURSOR_INFO cci;
	cci.dwSize=50;
	cci.bVisible=FALSE;
	SetConsoleCursorInfo(hCon,&cci);
}
class NAVE{
	int x,y;
	public:
	NAVE(int _x, int _y): x(_x),y(_y){}
	void pintar();
	void borrar();
	void mover();
};

void NAVE::pintar(){
	gotoxy(x,y); 	cout <<"  |  ";   
	gotoxy(x,y+1); 	cout <<"|<>|";
}
void NAVE::borrar(){
	gotoxy(x,y); 	cout <<"     "; 
	gotoxy(x,y+1); 	cout <<"     "; 
}
void NAVE::mover(){
	if(kbhit())  //presionado una tecla
	{
		char tecla = getch();
		borrar();
		//gotoxy(x,y); cout << " "; 
		if(tecla==IZQUIERDA) x--;
		if(tecla==DERECHA) x++;
		if(tecla==ARRIBA) y--;
		if(tecla==ABAJO) y++;
		pintar();
		//gotoxy(x,y);	cout << "*"; 
	}
}
main( )
{
	HideCursor();
	NAVE avion(7,7);
	avion.pintar();

	// int x=10,y=10;
	// HideCursor();
	//gotoxy(x,y); cout << "*"; 
	
	bool game_over = false;
	while(!game_over)
	{
		avion.mover();
		Sleep(10);
	}
	// https://www.youtube.com/watch?v=Rc4Zqn8TsSI
	
}
