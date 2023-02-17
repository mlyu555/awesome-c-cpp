#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str1("235");
    string str2("121");

    bool result;
    result = str1 > str2;
    cout << result << endl; // 1

    str1 = "1111";
    result = str1 > str2;
    cout << result << endl; // 0

    str1 = "111";
    result = str1 > str2;
    cout << result << endl; // 0

    return 0;
}