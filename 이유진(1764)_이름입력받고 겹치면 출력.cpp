#include <iostream>
#include <algorithm>
#include <map> 
#include <cctype>
#include <string>
using namespace std;
string Name[100];
string Name2[100];

int main(void)
{
	ios::sync_with_stdio(false); cin.tie(NULL);//�ð��ʰ� ����	 
	map<string, bool>NOPE;     //NOPE �� ���� 
	vector<string>answer;  //�赵���� ���� ��  

	int Nh, Ns, i;  
	string Input; 
	
	cin >> Nh >> Ns;
	
	//����������   
	for(i=0; i<Nh; i++)
	{
		cin >> Name[i];
		NOPE.insert({Name[i], true});   
	}
	//���� ���� 
	for(i=Nh; i<Nh+Ns; i++)
	{
		cin >> Name2[i];
		
		if(NOPE[Name2[i]]!=0)  //false�� �ƴϸ� �ȿ� ���� ������������ �����ʿ� ����     
		{
			answer.push_back(Name2[i]);  
		}
		else
		{
		NOPE.insert({Name[i], true});
		}
	}
	sort(answer.begin(), answer.end());
	cout << answer.size() <<"\n";
	
	
	for(i=Nh; i<answer.size()+Nh; i++)
	{
		cout << Name2[i]<<"\n";
	}
	
	return 0;
	
   }



