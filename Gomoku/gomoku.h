#pragma once

//////////////////////////////////////////////////////////////////////////////////
//������ֻ��ѧϰʹ�ã�δ��������ɣ��������������κ���;
//����������ͷ�ļ�
//���ߣ�H.R.Geng
//�޸����ڣ�2018.12.3
//�汾��v1.0
//All rights reserved
//��F12����Fn+F12)����׷�ٺ���
//
//
//////////////////////////////////////////////////////////////////////////////////

typedef int Status;

#define OK 0					//����
#define ERROR 1					//����

#define QiPanGeKuan 40			//���̸��
#define LightBrown 0x0088AA		//���̵�ɫ

#define JingDu 15				//�����жϾ��ȣ�Խ�󾫶�Խ��
#define ChessPiecesSize 15		//���Ӵ�С

#define PlayerIsBlack 1			//�ڷ�����
#define PlayerIsWhite 2			//�׷�����

#define KeepPlaying 0			//δ����ʤ��
#define BlackWin 1				//��ʤ�ж�
#define WhiteWin 2				//��ʤ�ж�
#define DrawningGame 3			//�;��ж�

#define StepTime 10				//��ʱ��������

//�����ʼ����
Status StartMenu(int Gomoku_CSBD[15][15]);

//��Ϸ�������
Status DrawBackground();

//������������
Status GomokuRun(int Gomoku_CSBD[15][15], int &restartgame);

//�����Ϸ������Ϣ
Status GameFinish(int index, int Gomoku_CSBD[15][15]);

//�������������
Status MoveByMouse(MOUSEMSG msg, int Gomoku_CSBD[15][15], int &player, int &BushuBlack, int &BushuWhite);

//�����������ӣ���δʵ�֣�
//Status MoveByNum(int hang, int lie, int Gomoku_CSBD[15][15], 
//	int &player, int &BushuBlack, int &BushuWhite);	

//�ж��Ƿ����˻�ʤ
//��ʤ����BlackWin����ʤ����WhiteWin�����ӿ��·���DrawningGame��δ����ʤ������KeepPlaying
int WinOrNot(int Gomoku_CSBD[15][15], int BushuBlack, int BushuWhite);

//�رճ���
Status ExitGame(MOUSEMSG m, int left, int right, int top, int bottom);

//���¿�ʼ�µ�һ��
Status RestartGame(MOUSEMSG m, int left, int right, int top, int bottom);

//��ӡ��ʱ����ʱ
Status PrintTime(int player, time_t StartTime, time_t FinishTime, bool &ChangePlayer);

//�жϲ�ʱ�Ƿ�ʱ
bool TimeFinish(time_t StartTime, time_t FinishTime);