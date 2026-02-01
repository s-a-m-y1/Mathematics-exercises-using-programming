#include<iostream>
using namespace std;
short Read1()
{
    short a;
    cin>>a;
    return a;

}
short Read2()
{
    short a;
    cin>>a;
    return a;

}
bool iSMultiples(short A , short b)
{
return(A%b==0&&b!=0);
 
}
int main()
{
    short A=Read1();
    short  B = Read2();
    if (iSMultiples(A,B))
    {
        cout<<"Yes The A Multiples B";
    }
    else
    {
   cout<<"no The A is not Multiples B";
    }
       
    
return 0;    
}