#include <iostream>
using namespace std;

int main() 
{
	int i,a,b,c;
	cin>>a>>b;
	a=a+1;
	b=b-1;
	while(a<b)
	{
		c=0;
	for(i=2;i<=a/2;++i)
	{
		if(a%i==0)
		{
			c=1;
			break;
	}
	}
	if(c==0)
	cout<<a<<'\t';
	++a;
	}
	return 0;
}
