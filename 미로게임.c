#include <stdio.h>
#include <windows.h>

int score = 0, a = 0;
int field[10][10] = {
	{1,1,1,1,1,1,1,1,1,1},
	{1,0,0,0,0,0,1,1,0,1},
	{1,0,1,1,1,1,0,0,0,1},
	{1,0,0,0,1,1,0,1,2,1},
	{1,1,0,0,0,0,0,1,0,1},
	{1,0,0,1,1,1,0,1,1,1},
	{1,0,0,0,0,1,2,0,0,1},
	{1,0,1,1,0,1,0,1,1,1},
	{1,2,1,0,0,1,0,0,0,0},
	{1,1,1,1,1,1,1,1,1,1}        // 미로판
};
void print_maze() { system("cls");	
for (int i = 0; i < 10; i++) 
{ for (int j = 0; j < 10; j++) 
{ printf("%d ", field[i][j]); }		
printf("\n"); }	
printf("점수 : %d", score); }
void clear() { system("cls");
printf("점수 : %d\n\n", score);
printf("%s", "축하합니다! 게임을 깼습니다!");	a = 3;
}
void process(int* a) 
{ if (*a == 2) { score++; }	*a = 9; } 
int main() {
	int x = 1, y = 1, z;	
	int key;	
	while (a < 4) 
	{ 
		printf("%s", "주어진 지도로 게임시작 1번\n제작자를 확인 2번  \n게임설명 3번 \n");		
	scanf_s("%d", &z);		
	if (z == 1) { break; } 
	
	if (z == 2) { 
		printf("%s", "제작\n 윤성준\n 이성현\n 이주현\n 김지성\n 김민석\n\n"); 
	}
	if (z == 3) {
		printf("%s", "게임 설명\n 숫자9를 방향키로 움직여 숫자 2를 먹어 점수를 올리면서 미로를 탈출하자!!\n\n");
	}
	}
	field[x][y] = 9;	
	print_maze();		
	while (a < 4) {
		if (kbhit()) {
			key = getch();			
			if (key == 224 || key == 0) {
				key = getch();				
				switch (key) {
				case 72:					
				if (x-1 >= 0 && field[x - 1][y] == 1)
				break;					
				if (x == 0) { clear(); 
				break; }					
				field[x][y] = 0;					
				process(&field[x - 1][y]);					
				x--;					
				print_maze();					
				break;				
				case 75: 					
				if (y-1 >= 0 && field[x][y - 1] == 1) 
				break;					
				if (y == 0) { clear(); 
				break; }					
				field[x][y] = 0;					
				process(&field[x][y - 1]);					
				y--;					
				print_maze();					
				break;				
				case 77: 					
				if (y+1 <= 9 && field[x][y + 1] == 1)
				break;					
				if (y == 9) { clear(); 
				break; }					
				field[x][y] = 0;					
				process(&field[x][y + 1]);					
				y++;					
				print_maze();					
				break;				
				case 80: 					
					if (x+1 <= 9 && field[x+1][y] == 1) 
						break;					
					if (x == 9) { clear(); 
					break; }					
					field[x][y] = 0;					
					process(&field[x + 1][y]);					
					x++;					
					print_maze();					
					break;				
				}			
			} 		
		} 	
	}
}
