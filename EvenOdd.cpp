#include <iostream>
using namespace std;

int main() 
{
    int number, remainder;
    cout<<"Enter the Number:";
    cin>>number;
    remainder=number%2;
    if(remainder==0)
    cout<<"Even";
    else
    cout<<"Odd";
	return 0;
}
