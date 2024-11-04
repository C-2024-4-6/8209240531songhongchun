#include <iostream>
using namespace std;
int main() 
{
    char letter;
    cout << "请输入一个字符：";
    cin >> letter;
    if (letter >= 'a' && letter <= 'z') 
    {
        cout << static_cast<char>(letter - 32) << endl;
    }
    else 
    {
        cout << static_cast<int>(letter + 1) << endl;
    }
    return 0;
}