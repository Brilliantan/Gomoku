#include<graphics.h>
#include<cstdlib>
#include"gomoku.h"
#pragma warning(disable:4996)
using namespace std;

//////////////////////////////////////////////////////////////////////////////////
//������ֻ��ѧϰʹ�ã�δ��������ɣ��������������κ���;
//������������
//���ߣ�H.R.Geng
//�޸����ڣ�2018.12.3
//�汾��v1.0
//All rights reserved
//��F12����Fn+F12)����׷�ٺ���
//
//
//////////////////////////////////////////////////////////////////////////////////

int main()
{
	//gomoku chessboard
	int Gomoku_CSBD[15][15];	
	initgraph(1200, 713, SHOWCONSOLE);
	StartMenu(Gomoku_CSBD);
	closegraph();
	return 0;
}
