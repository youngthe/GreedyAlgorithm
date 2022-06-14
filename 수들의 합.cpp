#include<iostream>
using namespace std;
int main()
{
	long long n;
	
	cin >> n;
	long long sum = 0;
	long long number = 0;
	while(sum<=n)
	{
		number++;
		sum+=number;
	}
	cout << number-1 ;
	
}
