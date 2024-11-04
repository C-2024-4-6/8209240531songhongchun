#include <iostream>
using namespace std;
int main() 
{
    int a, b, c;
    cout << "请输入三角形的三条边：";
    cin >> a >> b >> c;
    if (a + b > c && a + c > b && b + c > a) 
    {
        int C = a + b + c;
        cout << "三角形的周长为：" << C << endl;
        if ((a == b && a != c) || (a == c && a != b) || (b == c && b != a) || (a==b==c)) 
        {
            cout << "该三角形是等腰三角形" << endl;
        }
        else 
        {
            cout << "该三角形不是等腰三角形" << endl;
        }
    }
    else 
    {
        cout << "输入的三条边不能构成三角形" << endl;
    }

    return 0;
}