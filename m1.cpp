#include<iostream>
using namespace std;

bool IS_AbigB(short A  , short B)
{
    return (A>10&&B%2==0);

}
int main()
{
    short A =5,B =2;
    short D =11,H=4;
   
    if (IS_AbigB(D ,H))
    {
       cout<<"True";
    }
    else
    {
        cout<<"False";
    }
    

    return 0;
}