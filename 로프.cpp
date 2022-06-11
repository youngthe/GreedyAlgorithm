#include<iostream>
#include<algorithm>
using namespace std;


int main(){
	ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
	int ropecount;
	
	cin >> ropecount;
	
	int ropeweight[100001] = {0,};
	int i, j;
	long long  result;
	long long  sum;
	
	for (i=0;i<ropecount;i++)
	{
		cin >> ropeweight[i];
	}
	if(ropecount == 1){
		cout << ropeweight[0] << endl;
		return 0;
	}
	//로프 무 게 내림차순 정렬 
	sort(ropeweight, ropeweight+ropecount, greater<int>());
	result = ropeweight[0];
	for(i=0;i<ropecount;i++)
	{
		sum=ropeweight[i]*(i+1);
		if(sum > result){
			result = sum;
		}
	}
	
	cout << result;
	return 0;
}
