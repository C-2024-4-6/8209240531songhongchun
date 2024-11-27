#include <iostream>
using namespace std;
int main() 
{
    bool arr[100];
    for (int i = 0; i < 100; i++) 
    {
        arr[i] = false;
    }
    for (int j = 1; j <= 100; j++) 
    {
        for (int k = j - 1; k < 100; k += j) 
        {
            arr[k] = !arr[k];
        }
    }
    for (int i = 0; i < 100; i++) 
    {
        if (arr[i]) 
        {
            cout << i + 1 << " ";
        }
    }
    cout << endl;
    return 0;
}