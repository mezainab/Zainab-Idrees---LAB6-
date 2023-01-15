#include <iostream>
using namespace std;

float buyTickets(int budget, string category, int noOfPeople);
main()
{
int budget, noOfPeople;
float seat;
string category;

cout<<"Enter Your Budget: ";
cin>>budget;
cout<<"Enter Your Category: ";
cin>>category;
cout<<"Enter number of People: ";
cin>>noOfPeople;

seat = buyTickets(budget, category, noOfPeople);

}
float buyTickets(int budget, string category, int noOfPeople)
{
    float price, amount, ticket, seat;

    if(category == "VIP" && (noOfPeople >= 1 && noOfPeople <=4))
    {
        price =budget-budget*0.75;
        ticket = noOfPeople*499.99;
        if(price >= ticket)
        {
            amount = price- ticket;

            cout<<"Yes! you have"<< amount<<"qr";
        }
        else
        {
            amount = ticket - price;
        
            cout<<"Not enough money you need "<<amount<<"qr";
        }

    }
    else if(category == "Normal" && (noOfPeople >= 1 && noOfPeople <=4))
    {
       price = budget-budget*0.75;
       ticket = noOfPeople*249.99;
       if(price >= ticket)
        {
            amount = price - ticket;

            cout<<"Yes! you have"<<amount<<"qr";
        }
       else
        {
            amount = ticket - price;

            cout<<"Not enough money you need"<<amount<<"qr";
        }
    }
    else if(category == "VIP" && (noOfPeople >= 5 && noOfPeople <=9))
    {
        price = budget - budget*0.6;
        ticket = noOfPeople*499.99;
        if(price >= ticket)
        {
            amount = price - ticket;
            
            cout<<"Yes! you have"<<amount<<"qr";
        }
        else
        {
            amount = ticket - price;
            
            cout<<"Not enough money you need"<<amount<<"qr";
        }
    }
    else if(category == "Normal" && (noOfPeople >= 5 && noOfPeople <=9))
    {
        price = budget - budget*0.6;
        ticket = noOfPeople*249.99;
        if(price >= ticket)
        {
            amount = price - ticket;
            
            cout<<"Yes! you have"<<amount<<"qr";
        }
        else
        {
            amount = ticket - price;
            
            cout<<"Not enough money you need"<<amount<<"qr";
        }
    }
    else if(category == "VIP" && (noOfPeople >= 10 && noOfPeople <=24))
    {
        price = budget - budget*0.5;
        ticket = noOfPeople*499.99;
        if(price >= ticket)
        {
            amount = price - ticket;
            
            cout<<"Yes! you have"<<amount<<"qr";
        }
        else
        {
            amount = ticket - price;
            
            cout<<"Not enough money you need"<<amount<<"qr";
        }
    }
    else if(category == "Normal" && (noOfPeople >= 10 && noOfPeople <=24))
    {
        price == budget - budget*0.5;
        ticket = noOfPeople*249.99;
        if(price >= ticket)
        {
             amount = price - ticket;
            
             cout<<"Yes! you have"<<amount<<"qr";
        }
        else
        {
            amount = ticket - price;
            
            cout<<"Not enough money you need"<<amount<<"qr";
        }
    }
    else if(category == "VIP" && (noOfPeople >= 25 && noOfPeople <=49))
    {
        price = budget - budget*0.4;
        ticket = noOfPeople*499.99;
        if(price >= ticket)
        {
             amount = price - ticket;
            
             cout<<"Yes! you have"<<amount<<"qr";
        }
        else
        {
            amount = ticket - price;
            
            cout<<"Not enough money you need"<<amount<<"qr";
        }
    }
    else if(category == "Normal" && (noOfPeople >= 25 && noOfPeople <=49))
    {
        price = budget - budget*0.4;
        ticket = noOfPeople*249.99;
        if(price >= ticket)
        {
             amount = price - ticket;
            
             cout<<"Yes! you have"<<amount<<"qr";
        }
        else
        {
             amount = ticket - price;
            
             cout<<"Not enough money you need"<<amount<<"qr";
        }
    }
    else if(category == "VIP" && noOfPeople >= 50)
    {
        price = budget - budget*0.25;
        ticket = noOfPeople*499.99;
        if(price >= ticket)
        {
              amount = price - ticket;
            
              cout<<"Yes! you have"<<amount<<"qr";
        }
        else
        {
             amount = ticket - price;
            
             cout<<"Not enough money you need"<<amount<<"qr";
        }
    }
    else if(category == "Normal" && noOfPeople >= 50)
    {
        price = budget - budget*0.25;
        ticket = noOfPeople*249.99;
        if(price >= ticket)
        {
            amount = price - ticket;
            
            cout<<"Yes! you have"<<amount<<"qr";
        }
        else
        {
            amount = ticket - price;
            
            cout<<"Not enough money you need"<<amount<<"qr";
        }
    }
    return seat;
}
