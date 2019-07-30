#include <iostream>
using namespace std;
int main() 
{
	int num,fac=1;
	cin>>num;
	for(int a=1;a<=num;a++)
	{
		fac=fac*a;
	}
	cout<<fac;
	return 0;
}
