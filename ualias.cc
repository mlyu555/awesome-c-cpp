#include <iostream>
#include <string>
#include <map>
using namespace std;

// #define ALIAS_TYPEDEF
#define ALIAS_USING

#ifdef ALIAS_TYPEDEF

typedef int * IntPtr;               // 整型、浮点型
typedef char * CharPtr;

typedef char Array[10];             // 数组
typedef char (*ArrayPtr)[10];       // 数组指针

typedef struct {                    // 结构体
    int a;
    char b;
} MyStruct;

typedef int Func(int, int);         // 函数体
typedef int (*FuncPtr)(int, int);   // 函数指针

typedef map<string, int> MapSI;     // 模板类型

#endif

#ifdef ALIAS_USING

using IntPtr = int *;               // 整型、浮点型、字符型
using CharPtr = char *;

using Array = char[10];             // 数组
using ArrayPtr = char (*)[10];       // 数组指针

struct _MyStruct {                    // 结构体
    int a;
    char b;
};
using MyStruct = _MyStruct;

using Func = int (int, int);         // 函数体
using FuncPtr = int (*)(int, int);   // 函数指针

using MapSI = map<string, int>;     // 模板类型

#endif

int add(int x, int y) {
    return x + y;
}

int main() {
    IntPtr p = new int(4);
    cout << p << "\t" << *p << endl;

    CharPtr p1 = new char('a');
    cout << p1 << "\t" << *p1 << endl;

    Array p2 = "abc";
    cout << p2 << "\t" << *p2 << endl;

    ArrayPtr p3 = &p2;
    cout << p3 << "\t" << *p3 << endl;

    Func *f = add;
    // Func f = add;       error
    cout << f << "\t" << f(1 ,2) << endl;

    FuncPtr f1 = add;
    cout << f1 << "\t" << f1(1 ,2) << endl;

    FuncPtr f2 = [](int a, int b) {return a - b;};
    cout << f2 << "\t" << f2(1 ,2) << endl;

    return 0;
}