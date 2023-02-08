#include <iostream>
#include <string>
#include <string.h>
using namespace std;

class Test
{
public:
    string name;
    int     a;
};

int main()
{
    Test t;
    memset(&t, 0, sizeof(Test));
    cout << t.name << "\t" << t.a << endl;
    return 0;
}