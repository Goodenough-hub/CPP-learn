#include<iostream>

using namespace std;

int main()
{
	int line1[] = {1, 0, 0}; // ����ĵ�һ��
	int line2[] = {0, 1, 0}; // ����ĵڶ���
	int line3[] = {0, 0, 1}; // ����ĵ�����
	
	// ��������ָ�����鲢��ʼ��
	int *pLine[3]  = {line1, line2, line3};
	cout << "Matrix test: " << endl;
	
	// �������
	for(int i = 0; i < 3; i ++) {
		for(int j = 0; j < 3; j ++)
			cout << pLine[i][j] << " ";
		cout << endl;
	}
	return 0;
}
