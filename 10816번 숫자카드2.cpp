#include <iostream>            //�����̳� �Ǵ� �迭���� �Ҵ�� ��踦 �Ѿ�� ���� �߻�
#include <vector>
#include <algorithm>

using namespace std;
int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	int N, M, m, count;
    
    
    cin >> N;
    vector<int>values(N);
    for(int i=0; i < N; i++)  cin >> values[i];  //N���� ���ڸ� �޴´�.  
	
	sort(values.begin(), values.end());  //������������ �����Ѵ�.  
	 
	cin >> M;       
	
	for(int i=0; i<M; i++)
	{
		cin >> m;
		count = std::count(values.begin(), values.end(), m);      //count�Լ� �˰���������� ����:  
		cout << count<<" ";
	}
 
    return 0;
}
