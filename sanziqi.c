#define _CRT_SECURE_NO_WARNINGS 1

#include "game.h"


//���������
	
void game()
{
	//printf("+---------_----------_----------+");
	//pritnf("|         |          |          |");
	//pritnf("|         |          |          |");
	//pritnf("|         |          |          |");
	//pritnf("|         |          |          |");
	//printf("|---------+----------+----------_");
	//pritnf("|         |          |          |");
	//pritnf("|         |          |          |");
	//pritnf("|         |          |          |");
	//pritnf("|         |          |          |");
	//printf("|---------+----------+----------_");
	//pritnf("|         |          |          |");
	//pritnf("|         |          |          |");
	//pritnf("|         |          |          |");
	//pritnf("|         |          |          |");
	//printf("+---------=----------=----------+");}

	//�洢����
	int arr[BOW][COL];
	//ͳ�ƴ���
	int n = 0;
	//��ʼ��
	initgame(arr,BOW,COL);
	//����ʵ��
	//int i = 1;//��Ϸ״̬
	//for (;;)
	//{		
	//	if (i == 1) { display(arr, BOW, COL); }//��ӡ����}
	//	//�������
	//	printf("����������ӵ�:>");
	//	playerMove(arr);
	//	//display(arr, BOW, COL);
	//	i++;
	//	if (isWin(arr) != 0)
	//	{
	//		playerovermenu();
	//		break;
	//	}
	//	else if (i == BOW * COL)
	//	{
	//		equalmenu();
	//		break;
	//	}
	//	//��������
	//	computerMove(arr);
	//	display(arr, BOW, COL);
	//	i++;
	//	if (isWin(arr) != 0)
	//	{
	//		compovermenu();
	//		break;
	//	}
	//	else if (i == BOW * COL)
	//	{
	//		break;
	//		equalmenu();
	//	}
	//	

	for (int i = 1;;)
	{
		if (i == 1) 
		{
			display(arr, BOW, COL);
			i++;
		}
		else
		{
			//�������
			printf("������������\n:>");
			playerMove(arr);
			//״̬�ж�
			if (n < BOW * COL)
			{
				//δ����
				if (isWin(arr) == 1)
				{
					//���Ӯ
					playerovermenu();
					break;
				}
				else
				{
					//����
				}
				n++;
			}
			else
			{
				//ƽ��
				equalmenu();
				break;
			}
			//��������
			computerMove(arr);
			//״̬�ж�
			if (n < BOW * COL)
			{
				if (isWin(arr) == 2)
				{
					//����Ӯ
					compovermenu();
					break;
				}
				else
				{
					display(arr, BOW, COL);
					//����
				}
				n++;
			}
			else
			{
				//ƽ��
				equalmenu();
				break;
			}
		}


	}


	
	
}


int main()
{
	srand ((unsigned int)time(NULL));
	beginingmenu();
	int input = 0;
	do
	{
		scanf("%d", &input);
		switch(input)
		{
		case 1:
			game();
			break;

			//int ret = 0;
			//scanf("%d", &ret);
			//if (ret)
			//{
			//}
			//else
			//{
			//	input = 0;
			//	printf("�ټ�");
			//	break;
			//}
			
		case 0:
			printf("���˳�");
			break;
		default:
			printf("///////����������������롣//////");
			break;
		}
	} while (input);

	return 0;
}