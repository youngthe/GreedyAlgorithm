#include <iostream>
using namespace std;
int main()
{
	
	int A = 300; //5Ка -> 300УЪ
	int B = 60;
	int C = 10;
	int countA = 0;
	int countB = 0;
	int countC = 0;
	int N;
	
	cin >> N;
	
	while(1){
		if(N>=300){
			N-=300;
			countA++;
		}else if(N>=60){
			N-=60;
			countB++;
		}else if(N>=10){
			N-=10;
			countC++;
		}else if(N==0){
			cout << countA << ' ' << countB << ' ' << countC;
			return 0;
		}else if(N<10){
			cout << "-1";
			return 0;
		}else{
			return 0;
		}
	} 	
}
	
