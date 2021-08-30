#include <stdio.h>
#include <Windows.h>
#include <conio.h>

void gotoxy(int x,int y) {
	COORD c = { x,y };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), c);
	
}

void e_ship() {
	system("cls");
}

void d_ship(int x, int y) {
	e_ship();
	gotoxy(x, y);
	printf("<-0->");
}

int main() {
	
	char ch = ' ';
	int x = 38, y = 20;
	for (int k = 1; k <= 8; k++)
		for (int i = 0; i <= 9; i++)
			printf("%d", i);
	d_ship(x, y);
	
	do {
		
		if (_kbhit()) {
			ch = _getch();

			if(x>=1)
			if (ch == 'a') { d_ship(--x, y); }

			if(x<=74)
			if (ch == 'd') { d_ship(++x, y); }

			if(y >= 1)
			if (ch == 'w') { d_ship(x, --y); }

			if(y <= 30)
			if (ch == 's') { d_ship(x, ++y); }
			fflush(stdin);
			
		}
		
		Sleep(500);
		
	} while (ch != 'x');
	return 0;
}