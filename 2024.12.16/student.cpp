#include <iostream>
#include "student.h"
#include<string>
using namespace std;
void Student::display()
{
    cout << "num��" << num << endl;
    cout << "name��" << name << endl;
    cout << "sex��" << sex << endl;
}
void Student::set_value(int n, string na, char s)
{
    num = n;
    name=na;
    sex = s;
}