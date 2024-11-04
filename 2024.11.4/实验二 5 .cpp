#include <iostream>
using namespace std;
int main() {
    int English = 0;
    int space = 0;
    int number = 0;
    int other = 0;
    char c;
    cout << "请输入一行字符：";
    while ((c = getchar()) != '\n') {
        if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')) {
            English++;
        }
        else if (c == ' ') {
            space++;
        }
        else if (c >= '0' && c <= '9') {
            number++;
        }
        else {
            other++;
        }
    }
    cout << "英文字母个数：" << English << endl;
    cout << "空格个数：" << space << endl;
    cout << "数字字符个数：" << number << endl;
    cout << "其它字符个数：" << other << endl;
    return 0;
}