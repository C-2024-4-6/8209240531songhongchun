#include <iostream>
using namespace std;
void change(double&a, double&b)
{
	double temp = a;
	a = b;
	b = temp;
}
int main()
{
	const int listSize = 10;
	double list[listSize];
	cout << "请输入10个数字：" << endl;
	for (int i = 0; i < 10; i++)
	{
		cin >> list[i];
	}
	bool changed=true;
	do
	{
		changed = false;
		for (int j = 0; j < listSize-1; j++)
		{
			if (list[j] > list[j+ 1])
			{
				change(list[j], list[j + 1]);
				changed = true;
			}
		}
	} 
	while (changed);
	for (int i = 0; i < 10; i++) 
	{
		cout << list[i] << " ";
	}
	cout << endl;
	return 0;
}
   

