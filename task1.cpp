#include <iostream>
using namespace std;

char calculate(int marks);

main()
{
  int marks;
cout<<"Enter marks: ";
cin>>marks;

char result = calculate(marks);
cout <<"Your Grade is: "<<result;
}
char calculate(int marks)

{
    char grade;
if (marks < 50)
{
    grade = 'F';
}
else if (marks > 50 && marks <= 60 )
{
    grade = 'E';
}
else if (marks > 61 && marks <= 70 )
{
    grade = 'D';
}
else if (marks > 71 && marks <= 80 )
{
    grade = 'C';
}
else if (marks > 81 && marks <= 85 )
{
    grade = 'B';
}
else if (marks > 85 && marks <=100 )
{
    grade = 'A';
}
return grade;
}