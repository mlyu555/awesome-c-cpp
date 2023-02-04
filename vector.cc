#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;


void print(vector<int> &v) {
    for (auto i : v) {
        cout << i << " ";
    }
    cout << endl;
}

void test() {
    int arr[] = {1, 6, 3, 2, 5};

    vector<int> vec(arr, arr + 5);
    cout << "begin(): " << *vec.begin() << endl;

    // 排序
    sort(vec.begin(), vec.end());
    print(vec);
}

// 初始化
void init(){
    vector<int> v1;
    vector<int> v2 = v1;
    vector<int> v3(v2);
    vector<int> v4(5, 10);
    vector<int> v5(5);  // 数组
    vector<int> v6{1,2,3,4,5,6,7,8,9};
    vector<int> v7 = {1, 2,3,4,5,6,7,8};
}


int main() {




    return 0;
}