#include <iostream>
#include <string>
#include <cctype>
using namespace std;
int parseHex(const char* const hexString) 
{
    int decimal = 0;
    int len = strlen(hexString);
    for (int i = 0; i < len; i++) 
    {
        char ch = hexString[i];
        int digit;
        if (isdigit(ch)) 
        {
            digit = ch - '0';
        }
        else if (ch >= 'a' && ch <= 'f') 
        {
            digit = ch - 'a' + 10;
        }
        else if (ch >= 'A' && ch <= 'F') 
        {
            digit = ch - 'A' + 10;
        }
        decimal += digit * static_cast<int>(pow(16, len - 1 - i));
    }
    return decimal;
}
int main() 
{
    string hexInput;
    cout << "请输入一个十六进制数: ";
    cin >> hexInput;
    const char* hexString = hexInput.c_str();
    int result = parseHex(hexString);
    cout << "转换后的十进制数为: " << result << endl;
    return 0;
}