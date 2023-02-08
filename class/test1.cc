#include <iostream>
using namespace std;


// // case1
// class A
// {
// public:
//     ~A()
//     {
//         cout << "~A()" << endl;
//     }
// };
// class B : public A
// {
// public:
//     ~B()
//     {
//         cout << "~B()" << endl;
//     }
// };

// int main()
// {
//     A *a = new B;       // 析构函数的调用跟指针指向的对象有关，而跟指针的类型无关
//     delete a;           // ~A()
// }


// case2
class A
{
public:
    virtual ~A()
    {
        cout << "~A()" << endl;
    }
};
class B : public A
{
public:
    virtual ~B()
    {
        cout << "~B()" << endl;
    }
};

int main()
{
    A *a = new B;       // 析构函数的调用跟指针指向的对象有关，而跟指针的类型无关
    delete a;           // ~B()\n~A()
}
