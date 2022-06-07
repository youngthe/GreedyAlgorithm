#include<iostream>

using namespace std;

typedef struct _Arr{
	int value;
	int area;
} Arr;

//bool compare(int a, int b){
//	return a < b;
//}
int change(int a, int b);
int main(){
	
	int n, i, j, min=100;
	int temp;
	Arr arr_A_Min;
	Arr arr_B_Max;
	cin >> n;
	
	int arrA[n];
	int arrB[n];
	int checkarr[n] = {0,};
	int count=0;
	
	for(i=0;i<n;i++){
		cin >> arrA[i];;
	}
	
	for(i=0;i<n;i++){
		cin >> arrB[i];
	}
	
	arr_B_Max.area = 0;
	arr_A_Min.value = 100;
	
	
	//arrA 오름차순 정렬
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(change(arrA[i], arrA[j])){
				temp=arrA[i];
				arrA[i] = arrA[j];
				arrA[j] = temp;
			}
		}
	}
	
	
	
	for(int x=0;x<n;x++){
		
		arr_B_Max.value = 0;
		for(i=0;i<n;i++){
			
			if(arr_B_Max.value<arrB[i] & checkarr[i]==0)
			{
				cout << "arr_B_Max.value : " << arr_B_Max.value << " arr_B_Max.area : " << arr_B_Max.area<< endl;
				cout << "arrB[i] : " << arrB[i] << endl;
				arr_B_Max.value = arrB[i];
				arr_B_Max.area = i; 
				cout << "최대값 : "<< arr_B_Max.value << endl;
			}
			
		}
		//arrA[x] 값이랑 arrA[arr_B_MAX.area] 값이랑 바꿔야함 
		temp = arrA[x];
		arrA[x] = arrA[arr_B_Max.area];
		arrA[arr_B_Max.area] = temp;
		checkarr[arr_B_Max.area] = 1;
		cout << "change : " << arrA[x] << ", " << arrA[arr_B_Max.area] << endl;
		for(i=0;i<n;i++)
			cout << arrA[i] << ' ';
		
	}
	
	for(i=0;i<n;i++)
	{
		cout << arrA[i] << ' ';
		
	}
	cout << endl;
	for(i=0;i<n;i++)
	{
		cout << arrB[i] << ' ';
		
	}
	
}



int change(int a, int b)
{
	if(a > b)
	{
		return true;
	}
	else
		return false;
}
