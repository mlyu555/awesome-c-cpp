#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    vector<int> vec{5, 2, 2, 8, 6};

    sort(vec.begin(), vec.end());   // 正序，从小到大
    for (auto i : vec) {
        cout << i << " ";
    }
    cout << endl;

    sort(vec.rbegin(), vec.rend()); // 反序，从大到小
    for (auto i : vec) {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}