#include <iostream>
#include <map>

using namespace std;

int main(){
  int A, B;
  cin >> A >> B;  //A�� B�� ���� ���� �Է¹ޱ�  
  map<int, bool> mapset;
  
  for(int i=0; i<A+B; i++)   //A+B��ŭ�� ���Ұ��� �ޱ�.  
  {
    int k;
    cin >> k;
    
    if(mapset[k]!=0)    //m[k]�� 0(false)�� �ƴϸ�: k��� ���� ä�����ִٴ� �ǹ�. 
	{
    	mapset.erase(k);
	} 
    else       //m[k]==0:   k��� ���� �Էµ� �� ����.  
	{
	    mapset[k]=true;	
	} 
  }
  cout << mapset.size();
  return 0;
}
