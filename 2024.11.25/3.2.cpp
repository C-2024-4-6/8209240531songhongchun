#include <iostream>
using namespace std;
bool is_prime(int num) 
	{
	if (num < 2) 
	{
		return false;
	}
	for (int i = 2; i * i <= num; i++) 
	{
		if (num % i == 0) 
		{
			return false;
		}
	}
	return true;
}
int main() 
{
	int prime = 0;
	for (int i = 2; prime < 200; i++) 
	{
		if (is_prime(i)) 
		{
			cout << i<<"\t";
			prime++;
			if (prime % 10 == 0) 
			{
				cout << endl;
			}
		}
	}
	return 0;
}
