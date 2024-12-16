#include<iostream>
using namespace std;
class Time             
{
public:
	void show()
	{
		Time t1;           
		cin >> t1.hour;      
		cin >> t1.minute;
		cin >> t1.sec;
		cout << t1.hour << ":" << t1.minute << ":" << t1.sec << endl;
	}
private:             
	int hour;
	int minute;
	int sec;
};
int main()
{
	Time t1;
	t1.show();
	return 0;
}