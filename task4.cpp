#include <iostream>
using namespace std;

string checkSpeed(float speed, string speedInfo);
main()
{
float speed;
string speedInfo;

cout<<"Enter speed: ";
cin>>speed;

speedInfo = checkSpeed( speed, speedInfo);
cout<<"Speed info is: "<<speedInfo;

}
string checkSpeed(float speed, string speedInfo)
{
if(speed <= 10)
{
    speedInfo = "slow";
}
else if(speed > 10 && speed <= 50)
{
    speedInfo = "average";
}
else if(speed > 50 && speed <= 150)
{
    speedInfo = "fast";
}
else if(speed > 150 && speed <=1000 )
{
    speedInfo = "ultra fast";
}
else if(speed > 1000 )
{
    speedInfo = "extremely fast";
}

return speedInfo;

}
