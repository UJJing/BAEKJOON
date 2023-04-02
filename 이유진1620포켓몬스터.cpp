#include <iostream>
#include <cctype>
#include <stdlib.h>
#include <string>
#include <algorithm>
#include <map> 
using namespace std;

string Pocketmon[100000];   

int main()
{	cin.tie(0);      //�ð��ʰ��ذ�  
	ios::sync_with_stdio(0);    //�ð��ʰ� �ذ�
	
	map<string, int>mapset;    //map�Լ��� �����Ѵ�.   
	int N, M;
	string Input; //�Է¹޴� �̸�  
	int InputNum;  //�Է¹޴� ����  
	  
	cin >> N >> M;   //N�� M�� �Է� �޴´�.
	
	for(int i=0; i < N; i++)
	{ 
		cin >> Pocketmon[i];  //N�� ���ư��鼭 ���ϸ� �̸��� �޴´�.  
		mapset.insert({Pocketmon[i], i});
	} 
	
	for(int i=0; i<M; i++)
	{		
		cin >> Input;       //����� �Է¹޴´�.
		//1.���ϸ� ����  >> ���ϸ��̸�   
		if(isdigit(Input[0]) != 0)
		{
			InputNum=stoi(Input)-1;
			cout <<Pocketmon[InputNum]<<"\n"; 
		} 
		//2.���ϸ��̸�  >> ���ϸ����  
		else
		{
			auto index = mapset.find(Input);
			cout << index-> second+1<<"\n";               
		}
	} 
	return 0;
}

