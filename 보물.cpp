//ó���� ���� ����� ���ĵ� arrA�� ���ؼ� arrB���� �ִ밪 x�� ã���� �� ���� �ּ� i �� ù��° ���� �����Ű���� ����
// arrA[0] <-> arrA[i], arrA[1] <-> arrA[i] ...
// �̷��� ������״� ���� �浿�� �� -> �浹�� ���°��� �ذ��ϱ� ���ؼ� ������������ ���� üũ�ؼ� üũ �� ���� �����Ű�� �ʴ� ��
// �پ��� �õ��� �ߴ� ��� �����ߴ�. 
// ���� ������ ������ ����ϴٰ� ���ĵ� arrA�� ���� ������ arrB�� �ִ밪�� �ִ밪�� �ش��ϴ� �ּҸ� ã��
// result_arrA�� ���� ���� ���� �ִ밪�� �ش��ϴ� �ּҿ� arrA�� ���� �־����� �ذ��� �Ǿ���.
// �׸��� checkarr�� ���ؼ� �� ���� �ִ밪�� ���ϴ� ������ �����ߴ� 
// �׸��� typedef ��뿡�� ������ ������. 

#include<iostream>

using namespace std;

int main(){
	
	int n=0, i=0, j=0;
	int x=0;
	int temp=0; //���� 
	int Max;
	int MaxIndex=0;
	int result = 0; // �� �迭�� ���� S ���� ��� 
	cin >> n; // �Է��� �� �Է� 
	
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
	
	//arrA �������� ����
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




