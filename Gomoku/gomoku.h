#pragma once

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
#define BlackWin 1				//��ʤ
#define WhiteWin 2				//��ʤ
#define DrawningGame 3			//�;�
#define StepTime 60				//��ʱ
Status menu(int Gomoku_CSBD[15][15]);
Status DrawBackground();
Status playgame(int Gomoku_CSBD[15][15], int &restartgame);
Status Finish(int index, int Gomoku_CSBD[15][15]);
//�������������
Status MoveByMouse(MOUSEMSG msg, int Gomoku_CSBD[15][15], int &player, int &BushuBlack, int &BushuWhite);
Status MoveByNum(int Gomoku_CSBD[15][15], int &player, int &BushuBlack, int &BushuWhite);	//������������

//�ж��Ƿ����˻�ʤ����ʤ����1����ʤ����2�����򷵻�0
int WinOrNot(int Gomoku_CSBD[15][15], int BushuBlack, int BushuWhite);

Status ExitGame(MOUSEMSG m, int left, int right, int top, int bottom);
Status RestartGame(MOUSEMSG m, int left, int right, int top, int bottom);
Status PrintTime(int player, time_t StartTime, time_t FinishTime, bool &ChangePlayer);

bool TimeFinish(time_t StartTime, time_t FinishTime);