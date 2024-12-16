#include<iostream>
using namespace std;
class Point
{
public:
	int x;
	int y;
	Point(int x, int y)
	{
		this->x = x, this->y = y;
	}
	void setPoint(int i, int j)
	{
		x += i;
		y += j;
	}
	void display()
	{
		cout << "(" << x << "," << y << ")" << endl;
	}
};
int main()
{
	Point p(60, 80);
	p.setPoint(2, 3);
	p.display();
}