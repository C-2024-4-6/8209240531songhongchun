#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    double F;
    cout << "请输入华氏温度："<<endl;
    cin >> F;
    double C = (F - 32) * 5 / 9;
    cout << fixed << setprecision(2) << "摄氏温度为：" << C << endl;
    return 0;
}