#include<iostream> 
#include<list>
#include<deque>
using namespace std;

//输出指定1的顺序容器的元素
template <class T>
void printContainer(const char* msg, const T& s) {
	cout << msg << ":" ;
	copy(s.begin(), s.end(), ostream_iterator<int>(cout, " "));
	cout << endl;
}

int main() {
	// 从标准输入读入10个整数，将它们分别从s的头部加入
	deque<int> s;
	for(int i = 0; i < 10; i ++) {
		int x;
		cin >> x;
		s.push_front(x);
	}
	printContainer("deque at first", s);
	//用s容器的内容的逆序构造列表容器I
	list<int> I(s.rbegin(), s.rend()) ;
	printContainer("list at first", I);
	
	//将列表容器I的每相邻两个元素顺序颠倒
	list<int>::iteratoe iter = I.begin();
	while(iter != I.end()) {
		int v = *iter;
		iter = I.erase(iter);
		I.insert(++iter, v);
	}
	printContainer("list at last", I);
	//用列表容器I的内容给s赋值，将s输出
	s.assign(I.begin(), I.end());
	printContainer("deque at last", s);
	return 0;
}
