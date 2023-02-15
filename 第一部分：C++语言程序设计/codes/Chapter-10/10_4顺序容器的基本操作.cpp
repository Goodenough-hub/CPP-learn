#include<iostream> 
#include<list>
#include<deque>
using namespace std;

//���ָ��1��˳��������Ԫ��
template <class T>
void printContainer(const char* msg, const T& s) {
	cout << msg << ":" ;
	copy(s.begin(), s.end(), ostream_iterator<int>(cout, " "));
	cout << endl;
}

int main() {
	// �ӱ�׼�������10�������������Ƿֱ��s��ͷ������
	deque<int> s;
	for(int i = 0; i < 10; i ++) {
		int x;
		cin >> x;
		s.push_front(x);
	}
	printContainer("deque at first", s);
	//��s���������ݵ��������б�����I
	list<int> I(s.rbegin(), s.rend()) ;
	printContainer("list at first", I);
	
	//���б�����I��ÿ��������Ԫ��˳��ߵ�
	list<int>::iteratoe iter = I.begin();
	while(iter != I.end()) {
		int v = *iter;
		iter = I.erase(iter);
		I.insert(++iter, v);
	}
	printContainer("list at last", I);
	//���б�����I�����ݸ�s��ֵ����s���
	s.assign(I.begin(), I.end());
	printContainer("deque at last", s);
	return 0;
}
