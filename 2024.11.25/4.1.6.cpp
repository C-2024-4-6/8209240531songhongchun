#include <iostream>
#include <cctype>
#include <cstring>
using namespace std;
void count(const char s[], int counts[]) 
{
    int len = strlen(s);
    for (int i = 0; i < len; i++) {
        char ch = tolower(s[i]);
        if (ch >= 'a' && ch <= 'z') 
        {
            counts[ch - 'a']++;
        }
    }
}
int main() 
{
    char s[100];
    int counts[26] = { 0 };
    cout << "请输入一个字符串: ";
    cin.getline(s, 100);  
    count(s, counts);
    for (int i = 0; i < 26; i++) 
    {
        if (counts[i] > 0) 
        {
            cout << static_cast<char>('a' + i) << "出现的次数: " << counts[i] << endl;
        }
    }
    return 0;
}