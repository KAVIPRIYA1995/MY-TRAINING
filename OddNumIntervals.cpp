#include <iostream>
using namespace std;

int main() 
{
	int i,a,b;
	cin>>a>>b;
	a=a+1;
	b=b-1;
	for(i=a;i<=b;++i)
	if(i%2!=0)
	{
		cout<<i<<"\t";
	}
	return 0;
}
