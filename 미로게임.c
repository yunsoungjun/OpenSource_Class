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
	{1,1,1,1,1,1,1,1,1,1}        // �迭�� �̿��� �̷���
};
void print_maze() { system("cls");	
for (int i = 0; i < 10; i++) 
{ for (int j = 0; j < 10; j++) 
{ printf("%d ", field[i][j]); }		
printf("\n"); }	
printf("���� : %d", score); }
void clear() { system("cls");
printf("���� : %d\n\n", score);
printf("%s", "�����մϴ�! ������ Ŭ���� �߽��ϴ�!");	a = 3;
}
void process(int* a) 
{ if (*a == 2) { score++; }	*a = 9; } 
int main() {
	int x = 1, y = 1, z;	
	int key;	
	while (a < 4) 
	{ 
		printf("%s", "�־��� ������ ���ӽ��� 1��\n�����ڸ� Ȯ�� 2��  \n���Ӽ��� 3�� \n");		
	scanf_s("%d", &z);		
	if (z == 1) { break; } 
	
	if (z == 2) { 
		printf("%s", "����\n ������\n �̼���\n ������\n ������\n ��μ�\n\n"); 
	}
	if (z == 3) {
		printf("%s", "���� ����\n ����9�� ����Ű�� ������ ���� 2�� ȹ���Ͽ� ������ �ø��鼭 �̷θ� Ż������!!\n\n");
	}
	}
	field[x][y] = 9;	
	print_maze();		
	while (a < 4) {
		if (kbhit()) {
			key = getch();			
			if (key == 224 || key == 0) {                                        // �ƽ�Ű�ڵ带 �̿��� ����Ű ����
				key = getch();				
				switch (key) {
				case 72:					
				if (x-1 >= 0 && field[x - 1][y] == 1)
				break;
				printf("\n �� �����̽��ϴ�. /n");
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
				printf("\n �� �����̽��ϴ�. /n");
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
				printf("\n �� �����̽��ϴ� /n");
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
					printf("\n �� �����̽��ϴ� /n");
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
