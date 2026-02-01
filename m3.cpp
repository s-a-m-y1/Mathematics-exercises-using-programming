#include<iostream>
using namespace std;
bool ISLeapYear(short Year)
{
    return (Year%4==0&&Year%100!=0)||(Year%400==0);
}

int main()
{
    short Y =2024;
    if (ISLeapYear(Y))
    {
        cout<<"This Leap Year";
    }
    else
    {
        cout<<"Not Lear Year";
    }
    
    return 0;
}