#include <iostream>
using namespace std;
int peach(int n) 
{
    if (n == 10) 
    {  
        return 1;
    }
    else 
    {
        return (peach(n + 1) + 1) * 2;
    }
}
int main() 
{
    int i = peach(1); 
    cout << "第一天猴子共摘了 " <<i<< " 个桃子。" << endl;
    return 0;
}