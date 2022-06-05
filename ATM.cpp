#include<iostream>

using namespace std;
int main()
{

	int n;
	int temp;
	int time = 0;
	int temptime = 0;
	int i, j;
	
	cin >> n;
	
	int p[n];
	for(i=0;i<n;i++)
		cin >> p[i];
	

	for(i=0;i<n;i++){
		for(j=i+1;j<n;j++){
			if(p[i] > p[j]){
			
				temp=p[j];
				p[j]=p[i];
				p[i] = temp;
			}
		}
	}
	for(i=0;i<n;i++){
		temptime += p[i];
		time += temptime;
	}
	cout << time << endl;
	return 0;
}

