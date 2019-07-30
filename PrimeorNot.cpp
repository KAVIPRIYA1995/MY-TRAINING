#include <iostream>
using namespace std;
int main() 
{
	int n,m=0,num=0;
	cin>>n;
	m=n/2;
	for(int i=2;i<=m;i++)
	{
		if(n%i==0)
		{
			cout<<"no";
			num=1;
			break;
		}
	}
	if(num==0)
	cout<<"yes";
	return 0;
}
