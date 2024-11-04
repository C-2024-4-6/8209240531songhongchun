#include <iostream>
using namespace std;
int main()
{
	int r,h;
	cout << "请输入圆锥的半径：" << endl;
	cin >> r;
	cout << "请输入圆锥的高：" << endl;
	cin >> h;
	double PI = 3.14;
	double V = ( PI* r * r * h) / 3;
	cout << V << endl;
	return 0;
}