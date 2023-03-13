#include <iostream>
#include <iomanip>
#include <ctime>
using namespace std;
int main()
{
	const int MAX_ROW = 2000;
	const int MAX_COL = 2000;
	int(*a)[MAX_COL] = new int[MAX_ROW][MAX_COL];
	clock_t start, finish;

	//先行后列
	start = clock();
	for (int i = 0; i<MAX_ROW; i++)
	for (int j = 0; j<MAX_COL; j++)
		a[i][j] = a[i][j];
	finish = clock();
	//totaltime=(double)()/CLOCKS_PER_SEC;
	cout << "先行后列遍历时间为：" << finish - start << "ms" << endl;

    //先行后列2
	start = clock();
	for (int i = 0; i<MAX_ROW; i++)
	for (int j = 0; j<MAX_COL; j++)
		a[i][j] = a[j][i];
	finish = clock();
	//totaltime=(double)()/CLOCKS_PER_SEC;
	cout << "先行后列遍历时间为：" << finish - start << "ms" << endl;

	//先列后行
	start = clock();
	for (int i = 0; i<MAX_COL; i++)
	for (int j = 0; j<MAX_ROW; j++)
		a[j][i] = a[j][i];
	finish = clock();
	//totaltime=(double)()/CLOCKS_PER_SEC;
	cout << "先列后行遍历时间为：" << finish - start << "ms" << endl;

	//先列后行2
	start = clock();
	for (int i = 0; i<MAX_COL; i++)
	for (int j = 0; j<MAX_ROW; j++)
		a[j][i] = a[i][j];
	finish = clock();
	//totaltime=(double)()/CLOCKS_PER_SEC;
	cout << "先列后行遍历时间为：" << finish - start << "ms" << endl;

	return 0;
}