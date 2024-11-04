#include <iostream>
using namespace std;
int main() 
{
    int day = 1;
    int apple = 2;
    double sum = 0.8 * 2;
    while (apple * 2 <= 100) {
        day++;
        apple *= 2;
        sum += 0.8 * apple;
    }
    double average = sum / day;
    cout << "每天平均花：" << average  << endl;
    return 0;
}