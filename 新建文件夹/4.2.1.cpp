#include <iostream>
#include <cstring>
using namespace std;
int indexOf(const char *s1, const char *s2)
{
    int s1Len = strlen(s1);
    int s2Len = strlen(s2);
    for (int i = 0; i <= s2Len - s1Len; i++)
    {
        int j;
        for (j = 0; j < s1Len; j++)
        {
            if (s2[i + j] != s1[j])
            {
                break;
            }
        }
        if (j == s1Len)
        {
            return i;
        }
    }
    return -1;
}
int main()
{
    char s1[100];
    char s2[100];
    cout << "请输入第一个字符串: ";
    cin.getline(s1, 100);
    cout << "请输入第二个字符串: ";
    cin.getline(s2, 100);
    int result = indexOf(s1, s2);
    if (result != -1)
    {
        cout << "'" << s1 << "' 是 '" << s2 << "' 的子串，下标为 " << result << endl;
    }
    else
    {
        cout << result << endl;
    }
    return 0;
}