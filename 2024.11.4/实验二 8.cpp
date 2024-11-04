#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    double a;
    cout << "请输入一个数：" << endl;
    cin >> a;
    if (a < 0)
    {
        cout << "不成立" << endl;
    }
    else
    {
        double xn = a;
        double xnn;
        while (1)
        {
            xnn = (xn + a / xn) * 0.5;
            if (xn - xnn < 0.00001)
            {
                cout << xnn << endl; break;
            }
            else
            {
                xn = xnn;
            }
        }
        cout << "这个数的平方根为：" << xnn << endl;
    }
    return 0;
}

