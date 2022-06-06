#include<iostream>
using namespace std;


int main(){
	
	int n;
	int sum;
	int i;
	int count = 0;
	cin >> n;
	cin >> sum;
	int money_arr[n];
	
	for(i=0;i<n;i++)
	{
		cin >> money_arr[i];
	}
	
	for(i=n-1;i>=0;i--)
	{
		if(sum>=money_arr[i])
		{
			while(sum>=money_arr[i]){
				sum-=money_arr[i];
//				cout << money_arr[i] << "¿ø" << endl;
				count+=1;
			}
			
		}
		if(sum<=0){
			break;
		}
	}
	cout << count;
}
