#include <iostream>
using namespace std;
class student {
public:
    int id;
    int score;
};
void max(student *arr)
{
    student *maxstudent = &arr[0];
    for (int i = 1; i < 5; i++) 
    {
        if (arr[i].score > maxstudent->score) {
            maxstudent = &arr[i];
        }
    }
    cout << "成绩最高的学生学号是: " << maxstudent->id << endl<<"成绩是："<<maxstudent->score;
}
int main() 
{
    student arr[5] = {{1, 25},{2, 15},{3, 56},{4, 21},{5, 45}};
    max(arr);
    return 0;
}