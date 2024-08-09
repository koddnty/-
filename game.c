#define _CRT_SECURE_NO_WARNINGS 1

#include "game.h"

//void init()
//{
//	printf("      |\r");
//	printf("      |\r");
//	printf("      |\r");
//	printf("------|\r");
//}
//void user()
//{
//	printf(" *  * |\r");
//	printf("  **  |\r");
//	printf(" *  * |\r");
//	printf("------|\r");
//}
//void comp()
//{
//	printf("***** |\r");
//	printf("*   * |\r");
//	printf("***** |\r");
//	printf("------|\r");
//}

//����
void beginingmenu()
{
	printf("===============================================\n");
	printf("===================������======================\n");
	printf("===============================================\n");
	printf("===================1.��ʼ======================\n");
	printf("===================2.�˳�======================\n");
	printf("===============================================\n");
	printf("==================================made by ls===\n");
	printf("===============================================\n");
	printf("\n:>");
}
void playerovermenu()
{
	printf("===============================================\n");
	printf("==================��Ӯ�ˣ�=====================\n");
	printf("===============================================\n");
	printf("==================1.����=======================\n");
	printf("==================0.�˳�=======================\n");
	printf("===============================================\n");
	printf("==================================made by ls===\n");
	printf("===============================================\n");
	printf("\n:>");
}
void compovermenu()
{
	printf("===============================================\n");
	printf("==================�����ˣ�=====================\n");
	printf("===============================================\n");
	printf("==================1.����=======================\n");
	printf("==================0.�˳�=======================\n");
	printf("===============================================\n");
	printf("==================================made by ls===\n");
	printf("===============================================\n");
	printf("\n:>");
}
void equalmenu()
{
	printf("===============================================\n");
	printf("===================ƽ��========================\n");
	printf("===============================================\n");
	printf("==================1.����=======================\n");
	printf("==================0.�˳�=======================\n");
	printf("===============================================\n");
	printf("==================================made by ls===\n");
	printf("===============================================\n");
	printf("\n:>");
}

void init()
{
	printf("   |");
}
void user()
{
	printf(" * |");
}
void comp()
{
	printf(" + |");
}


//ʵ��
//��ʼ������Ϊ0
void initgame(int arr[BOW][COL], int bow, int col)
{
	for (int i = 0; i < bow; i++)
	{
		for (int j = 0; j < col; j++)
		{
			arr[i][j] = 0;
		}
	}
}
//��ӡ��Ϸͼ��
void display(int arr[BOW][COL], int bow, int col)
{		
	printf(" ");
	for (int j = 0; j < col; j++)
	{
		printf(" %d  ", j + 1);
	}
	printf("\n");
	for (int i = 0; i < bow; i++)
	{
		printf("%d", i + 1);
		for (int j = 0; j < col; j++)
		{
			if (arr[i][j] == 1)
			{
				user();
			}
			else if (arr[i][j] == 2)
			{
				comp();
			}
			else
			{
				init();
			}
		}
		printf("\n");
		printf(" ");
		for (int j = 0; j < col; j++)
		{
			printf("---|");
		}
		printf("\n");
	}
}
//�������ʹ����Ϊ1
void playerMove(int arr[BOW][COL])
{
	int bow, col;
	
	while (1)
	{
		scanf("%d%d", &bow, &col);
		if (((bow - 1) >= 0 && (bow - 1) <= 2) && ((col - 1) >= 0 && (col - 1) <= 2))
		{
			if (arr[bow - 1][col - 1] == 0)
			{
				arr[bow - 1][col - 1] = 1;
				break;
			}
			else
			{
				printf("��λ���ѱ�ռ������������\n:>");
			}
		}
		else
		{
			printf("�����ڴ�λ�ã�����������\n:>");
		}
	}

}
//�����������ʹ����Ϊ2
void computerMove(int arr[BOW][COL])
{
	for (int i = 0; i < BOW * COL; i++)
	{
		int x = rand()%BOW;
		int y = rand()%COL;
		if (arr[x][y] == 0)
		{
			arr[x][y] = 2;
			break;
		}
		else
		{
		}
	}
}
//��Ӯ�ж����ӮΪ1����ӮΪ2
int isWin(int arr[BOW][COL])
{
	int ret = 0;
	for (int i = 0; i < BOW; i++)
	{
		if ((arr[0][i] == arr[1][i] && arr[1][i] == arr[2][i]) && arr[1][i] != 0)
		{
			ret = arr[1][i];
			break;
		}
		else if ((arr[i][0] == arr[i][1] && arr[i][1] == arr[i][2]) && arr[i][1] != 0)
		{
			ret = arr[i][1];
			break;
		}
	}
	if (arr[0][0] == arr[1][1] && arr[1][1] == arr[2][2] && arr[0][0] != 0)
	{
		ret = arr[0][0];
	}
	else if (arr[0][2] == arr[1][1] && arr[1][1] == arr[2][0] && arr[0][2] != 0)
	{
		ret = arr[0][2];
	}
	return ret;
}