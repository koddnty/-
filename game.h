#pragma once
#define _CRT_SECURE_NO_WARNINGS 1

#define BOW 3
#define COL 3

//引头文件
#include <stdio.h>
#include <time.h>
#include <stdlib.h>

//材料
void equalmenu();
void playerovermenu();
void compovermenu();
void beginingmenu();


//引用函数
//初始化
void initgame(int arr[BOW][COL], int bow, int col);
//界面
void display(int arr[BOW][COL], int bow, int col);
//用户落子
void playerMove(int arr[BOW][COL]);
//电脑落子
void computerMove(int arr[BOW][COL]);
//输赢判断
int isWin(int arr[BOW][COL]);