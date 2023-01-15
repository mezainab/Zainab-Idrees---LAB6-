#include <iostream>
using namespace std;

float Purchase(float amount, float discount, string day, string month);

main()
{
float amount, discount, total;
string day, month;

cout<<"Enter the amount: ";
cin>>amount;
cout<<"Enter the day: ";
cin>>day;
cout<<"Enter month: ";
cin>>month;

total = Purchase(amount, discount, day, month);
cout<<"Total price is: "<<total;

}
float Purchase(float amount, float discount, string day, string month)
{
    float total;
    if(day == "Sunday" && (month == "October" || month == "August" || month == "March"))
    {
        discount = amount * 0.1;
        total = amount - discount;
    }
    else if(day == "Monday" && (month == "November" || month == "December" ))
    {
        discount = amount * 0.05;
        total = amount - discount;
    }
return total;

}