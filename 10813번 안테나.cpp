#include <iostream>
#include <algorithm>
#include<vector>
using namespace std;

int main()
{
	//�ð��ʰ��� �ذ����ش�.  
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
	int N;
	cin >> N; 
	vector<int> home; 
	 
	//�Է¹��� ���� ����. 
	for(int i=0; i<N; i++)
	{
		int input;
		cin >> input; 
		home.push_back(input);
	} 
	//���͸� �̿��� �������ش�. 
	sort(home.begin(), home.end()); 
	
	// []�ȿ� �Ҽ� ���� �ڵ����� ����. 
	cout << home[(N - 1) / 2];

}
    
  
