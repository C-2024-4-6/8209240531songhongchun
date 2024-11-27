#include<iostream>
using namespace std;
int greatest_common_factor(int& a, int& b)
{
	int i = a;
	for (; a % i != 0 || b % i != 0; i--)
	{
	}
	return i;
}
int Least_common_factor(int &a,int &b)
{
	int i= greatest_common_factor(a,b);
	int j = i * (a / i) * (b / i);
	return j;
}
int main()
{
	int a;
	int b;
	cout << "请输入两个数字：" << endl;
	cin >> a >> b;
	greatest_common_factor(a, b);
	int i= greatest_common_factor(a, b);
	cout << "他们的最大公因数是：" << i << endl;
	Least_common_factor(a, b);
	int j = Least_common_factor(a, b);
	cout << "他们的最小公倍数是：" << j << endl;
	return 0;
}
