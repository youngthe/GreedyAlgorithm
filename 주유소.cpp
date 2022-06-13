#include<iostream>
using namespace std;

int main()
{
	int n;
	
	
	cin >> n;
	 
	long long arr_city[n];
	long long arr_distance[n-1];
	long long result = 0;
	
	long long sum=0;
	//입력 
	for(long long i=0;i<n-1;i++)
	{
		cin >> arr_distance[i];
	}
	
	for(long long i=0;i<n;i++){
		cin >> arr_city[i];
	}
	long long cheap_oil = arr_city[0];
	
	for(long long i=1;i<n;i++){
		if(cheap_oil <= arr_city[i]){
			sum+=arr_distance[i-1];
		}else{
			result += cheap_oil * (sum+arr_distance[i-1]);
			sum = 0;
			cheap_oil = arr_city[i];
		}
	}
	result += sum*cheap_oil;
	
	//출력 
	cout << result << endl;
	
	
}
