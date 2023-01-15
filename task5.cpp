#include <iostream>
using namespace std;

float totalIncome(string screening, int rows, int columns);
main()
{
string screening;
int rows, columns;

cout<<"Enter the screening: ";
cin>>screening;
cout<<"Enter no. of rows: ";
cin>>rows;
cout<<"Enter no. of columns: ";
cin>>columns;

float result = totalIncome(screening, rows, columns);

cout<<"Your price is: "<<result;

}
float totalIncome(string screening, int rows, int columns)
{
 float result;
if (screening == "Premiere")
{
    result = rows*columns*12;
}
if (screening == "Normal")
{
    result = rows*columns*7.50;
}
if (screening == "Discount")
{
    result = rows*columns*5;
}
return result;
}