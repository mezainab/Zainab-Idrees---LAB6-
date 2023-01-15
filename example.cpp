#include <iostream>
using namespace std;

int isGreatest(int num1, int num2,int num3);
main ()
{
int num1, num2, num3, result;

cout<<"Enter first number: ";
cin>>num1;
cout<<"Enter second number: ";
cin>>num2;
cout<<"Enter third number: ";
cin>>num3;


result = isGreatest(num1, num2, num3);
}
int isGreatest(int num1, int num2,int num3)
{
int result;
if (num1 > num2 && num1 > num3)
{
    cout<<"Greatest no. is: "<<num1;
}
if (num2 > num3 && num2 > num1)
{
    cout<<"Greatest no. is: "<<num2;
}
if (num3 > num1 && num3 > num2)
{
    cout<<"Greatest no. is: "<<num3;
}

else 
{
    cout<<num2;
}
return result;
}
