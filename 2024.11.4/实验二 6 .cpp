#include<iostream>
using namespace std;
int main()
{
	int a;
	int b;
	cout << "请输入两个数字;" << endl;
	cin >> a >> b;
	int i = a;
		for (; a % i != 0 || b % i != 0; i--)
		{}
		cout <<"他们的最大公因数是："<< i << endl;
		int j = i * (a / i) * (b / i);
		cout << "他们的最小公倍数是：" << j << endl;
	return 0;
}