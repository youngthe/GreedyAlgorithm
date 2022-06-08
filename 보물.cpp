//처음에 접근 방식이 정렬된 arrA를 통해서 arrB에서 최대값 x를 찾으면 그 값의 주소 i 와 첫번째 값과 변경시키려고 했음
// arrA[0] <-> arrA[i], arrA[1] <-> arrA[i] ...
// 이러면 변경시켰던 값과 충동이 남 -> 충돌이 나는것을 해결하기 위해서 변경했을때의 값을 체크해서 체크 된 값을 변경시키지 않는 등
// 다양한 시도를 했던 결과 실패했다. 
// 좋은 생각이 없을까 고민하다가 정렬된 arrA의 값을 가지고 arrB의 최대값과 최대값의 해당하는 주소만 찾고
// result_arrA의 값을 새로 만들어서 최대값에 해당하는 주소에 arrA의 값을 넣었더니 해결이 되었다.
// 그리고 checkarr을 통해서 그 다음 최대값을 구하는 로직을 구현했다 
// 그리고 typedef 사용에서 에러가 났었음. 

#include<iostream>

using namespace std;

int main(){
	
	int n=0, i=0, j=0;
	int x=0;
	int temp=0; //정렬 
	int Max;
	int MaxIndex=0;
	int result = 0; // 각 배열의 곱의 S 연산 결과 
	cin >> n; // 입력할 수 입력 
	
	if(n == 0){
		cout << 0;
		return 0;
	}
	int arrA[50] = {0,};
	int arrB[50] = {0,};
	int checkarr[50] = {0,};
	int resultarrA[50] ={0,};
	
	for(i=0;i<n;i++){
		cin >> arrA[i];
	}
	
	for(i=0;i<n;i++){
		cin >> arrB[i];
	}
	
	//arrA 오름차순 정렬
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(arrA[i] > arrA[j]){
				temp=arrA[i];
				arrA[i] = arrA[j];
				arrA[j] = temp;
			}
		}
	}
	
	for(x=0;x<n;x++){
		
		Max=0;
		for(i=0;i<n;i++){
			
			if(Max<arrB[i] & checkarr[i]==0)
			{
				Max = arrB[i];
				MaxIndex = i;
			}
			
		}
		
		checkarr[MaxIndex] = 1;
		result += Max*arrA[x];
	}
	
	cout << result;
	return 0;
}




