#include <iostream>
using namespace std;
int main() {
    double num1, num2;
    char operate;
    cout << "请输入第一个数字：";
    cin >> num1;
    cout << "请输入运算符（+、-、*、/、%）：";
    cin >> operate;
    cout << "请输入第二个数字：";
    cin >> num2;
    switch (operate) {
    case '+':
        cout << num1 << " + " << num2 << " = " << num1 + num2 << endl;
        break;
    case '-':
        cout << num1 << " - " << num2 << " = " << num1 - num2 << endl;
        break;
    case '*':
        cout << num1 << " * " << num2 << " = " << num1 * num2 << endl;
        break;
    case '/':
        if (num2 == 0) 
        {
            cout << "除数不能为 0。" << endl;
        }
        else {
            cout << num1 << " / " << num2 << " = " << num1 / num2 << endl;
        }
        break;
    case '%':
        if (num2 == 0 || (int)num1 != num1 || (int)num2 != num2) 
        {
            cout << "不合法的操作，% 运算符要求两个操作数为整数且除数不能为 0" << endl;
        }
        else {
            cout << (int)num1 << " % " << (int)num2 << " = " << (int)num1 % (int)num2 << endl;
        }
        break;
    default:
        cout << "非法运算符" << endl;
    }
    return 0;
}
