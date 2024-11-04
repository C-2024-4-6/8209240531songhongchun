#include <iostream>
using namespace std;
int main()
{
    double x;
    double y;
    cout << "请输入一个 x 的值："<<endl;
    cin >> x;
    if (0 < x && x < 1) 
    {
        y = 3 - 2 * x;
        cout << y << endl;
    }
        else if (1 <= x && x < 5) 
        {
            y = 2/ (4 * x) + 1;
            cout << y << endl;
        }
            else if (5 <= x && x < 10) 
            {
                y = x * x;
                cout << y << endl;
            }
                else
                {
                    cout << "输入的 x 不在函数定义范围内" << endl;
                }
}