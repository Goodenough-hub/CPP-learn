#include<iostream> 

using namespace std;

int i;	// ȫ�ֱ������ļ������� 
int main(){
	i = 5;	// Ϊȫ�ֱ���i��ֵ 
	{
		int i;	// �ֲ��������ֲ������� 
		i = 7;
		cout << "i = " << i << endl; // ���7 
	}
	cout << "i = " << i << endl; // ���5 
	return 0;
}
