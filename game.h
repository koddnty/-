#pragma once
#define _CRT_SECURE_NO_WARNINGS 1

#define BOW 3
#define COL 3

//��ͷ�ļ�
#include <stdio.h>
#include <time.h>
#include <stdlib.h>

//����
void equalmenu();
void playerovermenu();
void compovermenu();
void beginingmenu();


//���ú���
//��ʼ��
void initgame(int arr[BOW][COL], int bow, int col);
//����
void display(int arr[BOW][COL], int bow, int col);
//�û�����
void playerMove(int arr[BOW][COL]);
//��������
void computerMove(int arr[BOW][COL]);
//��Ӯ�ж�
int isWin(int arr[BOW][COL]);