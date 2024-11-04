#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	unsigned int testUnint = 65534;
	cout << "output in Octal unsigned int type:" << oct << testUnint << endl;
	double i;
	cout << "Please enter a real number：" << endl;
	cin >> i;
	cout << "output in int type:" << static_cast<int>(i) << endl;
	return 0;
}