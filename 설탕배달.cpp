#include<iostream>
using namespace std;

int main()

{
	//����̰� ��� ���� �ϴ� Ű�μ� 
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
	havebong5 = temp; //�Է¹��� ���ڿ��� 5Ű�η� �ִ��� ���� ��°Ŵϱ� count �Է� 

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
