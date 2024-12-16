#include <iostream>
#include "student.h"
#include<string>
using namespace std;
void Student::display()
{
    cout << "num£º" << num << endl;
    cout << "name£º" << name << endl;
    cout << "sex£º" << sex << endl;
}
void Student::set_value(int n, string na, char s)
{
    num = n;
    name=na;
    sex = s;
}