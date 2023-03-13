#include <iostream>
using namespace std;

int main()
{
    int i = 4;

    for (int i = 0; i < 4; i++) {
        cout << "i = " << i << "\t";
        switch (i)
        {
        case 0:
            cout << 0;
            // break;
        case 1:
            cout << 1;
            // break;
        default:
            cout << 2;
            // break;
        case 2:
            cout << 3;
            break;
        }
        cout << endl;
    }

    return 0;
}

/***** 输出结果 *****
i = 0   0123
i = 1   123
i = 2   3
i = 3   23
***** 输出结果 *****/