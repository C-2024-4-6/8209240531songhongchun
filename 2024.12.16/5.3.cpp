#include<iostream>
using namespace std;
class prism
{
public:
	int length1;
	int width1;
	int height1;
	int length2;
	int width2;
	int height2;
	int length3;
	int width3;
	int height3;
	int volume1;
	int volume2;
	int volume3;
	void input()
	{
		cout << "请输入第一个长方柱的长：" << endl;
		cin >> length1;
		cout << "请输入第一个长方柱的宽：" << endl;
		cin >> width1;
		cout << "请输入第一个长方柱的高：" << endl;
		cin >> height1;
		cout << "请输入第二个长方柱的长：" << endl;
		cin >> length2;
		cout << "请输入第二个长方柱的宽：" << endl;
		cin >> width2;
		cout << "请输入第二个长方柱的高：" << endl;
		cin >> height2;
		cout << "请输入第三个长方柱的长：" << endl;
		cin >> length3;
		cout << "请输入第三个长方柱的宽：" << endl;
		cin >> width3;
		cout << "请输入第三个长方柱的高：" << endl;
		cin >> height3;
	}
	void calculate()
	{
		volume1 = length1 * width1 * height1;
		volume2 = length2 * width2 * height2;
		volume3 = length3 * width3 * height3;
	}
	void output()
	{
		cout << "第一个长方柱的体积：" << volume1 << endl;
		cout << "第二个长方柱的体积：" << volume2 << endl;
		cout << "第三个长方柱的体积：" << volume3 << endl;
	}
};
int main()
{
	prism p;
	p.input();
	p.calculate();
	p.output();
}