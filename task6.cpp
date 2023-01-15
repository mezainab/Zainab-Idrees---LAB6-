#include <iostream>
using namespace std;

float lowestPrice(int distance, string time);

main()
{
    int distance;
    string time;

cout<<"Enter the distance: ";
cin>>distance;
cout<<"Enter the time: ";
cin>>time;

float result = lowestPrice(distance, time);

cout<<"Lowest price is: "<<result;

}
float lowestPrice(int distance, string time)
{
float result;
if(distance < 20  && time == "Day")
{
    result = distance*0.79 + 0.70;
}
else if(distance < 20 && time == "Night")
{
    result = distance*0.90 +0.70;
}
else if(distance > 20 && distance < 100)
{
    result = distance*0.90;
}
else if(distance > 100)
{
    result = distance*0.06;
}
return result;
}
