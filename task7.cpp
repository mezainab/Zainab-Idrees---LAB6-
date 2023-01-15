#include <iostream>
using namespace std;

float checkCost(string city, string product, int quantity);
main()
{
string city, product;
int quantity;

cout<<"Enter the city: ";
cin>>city;
cout<<"Enter product name: ";
cin>>product;
cout<<"Enter the required quantity: ";
cin>>quantity;

float cost = checkCost(city, product, quantity);
cout<<"Your cost is: "<<cost;

}
float checkCost(string city, string product, int quantity)
{
float cost;

if(product == "Coffee" && city == "Sofia")
{
    cost = quantity*0.50;
}
if(product == "Coffee" && city == "Plovdiv")
{
    cost = quantity*0.40;
}
if(product == "Coffee" && city == "Varna")
{
    cost = quantity*0.45;
}
if(product == "Water" && city == "Sofia")
{
    cost = quantity*0.80;
}
if(product == "Water" && city == "Plovdiv")
{
    cost = quantity*0.70;
}
if(product == "Water" && city == "Varna")
{
    cost = quantity*0.70;
}
if(product == "Beer" && city == "Sofia")
{
    cost = quantity*1.20;
}
if(product == "Beer" && city == "Plovdiv")
{
    cost = quantity*1.15;
}
if(product == "Beer" && city == "Varna")
{
    cost = quantity*1.10;
}
if(product == "Sweets" && city == "Sofia")
{
    cost = quantity*1.45;
}
if(product == "Sweets" && city == "Plovdiv")
{
    cost = quantity*1.30;
}
if(product == "Sweets" && city == "Varna")
{
    cost = quantity*1.35;
}
if(product == "Peanuts" && city == "Sofia")
{
    cost = quantity*1.60;
}
if(product == "Peanuts" && city == "Plovdiv")
{
    cost = quantity*1.50;
}
if(product == "Peanuts" && city == "Varna")
{
    cost = quantity*1.55;
}
return cost;
}