#include <iostream>
using namespace std;

int main() 
{
    int number, remainder;
    cin>>number;
    remainder=number%2;
    if(remainder==0)
    cout<<"Even";
    else
    cout<<"Odd";
	return 0;
}
