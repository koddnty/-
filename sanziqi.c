#define _CRT_SECURE_NO_WARNINGS 1

#include "game.h"


//三子棋程序
	
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

	//存储数据
	int arr[BOW][COL];
	//统计次数
	int n = 0;
	//初始化
	initgame(arr,BOW,COL);
	//落子实现
	//int i = 1;//游戏状态
	//for (;;)
	//{		
	//	if (i == 1) { display(arr, BOW, COL); }//打印棋盘}
	//	//玩家落子
	//	printf("输入你的落子点:>");
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
	//	//电脑落子
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
			//玩家落子
			printf("输入落子坐标\n:>");
			playerMove(arr);
			//状态判断
			if (n < BOW * COL)
			{
				//未下满
				if (isWin(arr) == 1)
				{
					//玩家赢
					playerovermenu();
					break;
				}
				else
				{
					//继续
				}
				n++;
			}
			else
			{
				//平局
				equalmenu();
				break;
			}
			//电脑落子
			computerMove(arr);
			//状态判断
			if (n < BOW * COL)
			{
				if (isWin(arr) == 2)
				{
					//电脑赢
					compovermenu();
					break;
				}
				else
				{
					display(arr, BOW, COL);
					//继续
				}
				n++;
			}
			else
			{
				//平局
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
			//	printf("再见");
			//	break;
			//}
			
		case 0:
			printf("已退出");
			break;
		default:
			printf("///////输入错误，请重新输入。//////");
			break;
		}
	} while (input);

	return 0;
}