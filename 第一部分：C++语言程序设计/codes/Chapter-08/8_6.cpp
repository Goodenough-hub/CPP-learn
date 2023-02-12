#include<iostream>
using namespace std;

class Base1{
    public:
        virtual void display() const = 0; // 纯虚函数
};

class Base2:public Base1{
    public:
        virtual void display() const; // 覆盖基类的虚函数
};
void Base2::display() const{
    cout << "Base2::display()" << endl;
}
class Derived:public Base2{
    public:
        virtual void display() const; // 覆盖基类的虚函数
};
void Derived::display() const{
    cout << "Derived::display()" << endl;
}
void fun(Base1 *ptr){
    ptr->display();
}

int main()
{
    Base2 base2;
    Derived derived;
    fun(&base2);
    fun(&derived);
    return 0;
}
