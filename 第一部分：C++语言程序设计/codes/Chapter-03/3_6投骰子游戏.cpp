#include<iostream>
#include<cstdlib>

using namespace std;

enum GameStatus { WIN, LOSE, PLAYING };

// Ͷ���ӡ����������������� 
int rollDice()
{
	int die1 = 1 + rand() % 6;
	int die2 = 1 + rand() % 6;
	int sum = die1 + die2;
	cout << "player rolled " << die1 << " + " << die2 << " = " << sum << endl;
	return sum;
}

int main()
{
	int sum, myPoint;
	GameStatus status;
	unsigned seed;
	int roolDice();
	cout << "Please enter an unsigned inter: ";
	cin >> seed; // ����������� 
	srand(seed); // �����Ӵ��ݸ�rand() 
	sum = rollDice(); // ��һ��Ͷ���ӡ�������� 
	switch(sum) 
	{
		case 7: // �������Ϊ7��11��Ϊʤ��״̬ΪWIN
		case 11:
			status = WIN;
			break;
		case 2: // ����Ϊ2��3��12��Ϊ����״̬ΪLOSE
		case 3: 
		case 12:
			status = LOSE;
			break;
		default: // ������������޽����״̬ΪPLAYING�����µ���
			status = PLAYING;
			myPoint = sum;
			cout << "point is "  << myPoint << endl;
			break;
	}
	while(status == PLAYING)
	{
		sum = rollDice();
		if(sum == myPoint) status = WIN;
		else if(sum == 7) status = LOSE;
	}
	
	// ��1״̬��ΪPLAYINGʱѭ�������������Ϸ���
	if(status == WIN) 
		cout << "player wins" << endl;
	else
		cout << "player loses" << endl;
	return 0;
}
