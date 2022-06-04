#include<iostream>
using namespace std;

int main()

{
	//상근이가 들고 가야 하는 키로수 
	int n;
	
	int bong5 = 5;
	int bong3 = 3;
	int havebong5 = 0;
	int havebong3 = 0;
	int result;
	cin >> n;
	
	
	if(n < 5){
		if(n==3){
			cout << "1" << endl;
			return 0;
		}else{
			cout << "-1" << endl;
			return 0;
		}
	}
	
	int temp = n / bong5;
	havebong5 = temp; //입력받은 숫자에서 5키로로 최대한 많이 드는거니까 count 입력 

	if (n == bong5*temp){
		
		result = havebong5 + havebong3;
		cout << result << endl;			
		return 0;
	
	} else {
		temp = n % (bong5 * temp);
		if (temp % bong3 == 0){
			havebong3 = temp / bong3;
//			cout << "havebong5 : " << havebong5 << " havebong3 : " << havebong3 << endl;
			result = havebong5 + havebong3;
			cout << result << endl;
			return 0;

		}else{
			while(havebong5>0)
			{
				havebong5 -=1;
				temp += 5;
				if(temp % 3 == 0)
				{
					havebong3=temp/bong3;
//					cout << "havebong5 : " << havebong5 << " havebong3 : " << havebong3 << endl;
					result = havebong5 + havebong3;
					cout << result << endl;
					return 0;
				}
			}
			
			cout << "-1";
			return 0;
				
		}
		
		
	}
	return 0;
}
