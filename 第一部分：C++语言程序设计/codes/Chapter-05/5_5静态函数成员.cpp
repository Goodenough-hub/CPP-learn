#include<iostream>
using namespace std;
class Point{ // Point�ඨ��1
	public: // �ⲿ�ӿ�
		Point(int x = 0, int y = 0) :x(x), y(y){ // ���캯��  
			count ++; 
		}
		Point(Point& p){ // ���ƹ��캯�� 
			x = p.x;
			y = p.y;
			count ++;
		}
		~Point(){ count --; } // ��������������������ڽ���ʱcount--��
		int getX(){return x;}
		int getY(){ return y;}
		
		static void showCount(){ // �����̬���ݳ�Ա 
			cout << " Object count = " << count << endl;
		} 
	private: // ˽�����ݳ�Ա
		int x, y;
		static int count; // ��̬���ݳ�Ա���������ڼ�¼��ĸ��� 
};
int Point::count = 0; // ��̬���ݳɶ���ͳ�ʼ����ʹ�������޶�
int main(){
	Point::showCount(); // ���������� 
	Point a(4, 5); // �������a���乹�캯����ʹcount��1
	cout << "Point A: "  << a.getX() << ", " << a.getY();
	a.showCount(); // ����������
	
	Point b(a); // �������b,�乹�캯����ʹcount��1
	cout << "Point B:"  << b.getX() << ", " << b.getY();
	Point::showCount(); // ����������
	return 0; 
} 
