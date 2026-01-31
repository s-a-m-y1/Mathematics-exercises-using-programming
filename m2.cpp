#include<iostream>
using namespace std;
void swapint(string J , string W)
{
 string Temp =J;
 J=W;
 W=Temp;
cout<<"J = "<<J<<endl;
cout<<"W = "<<W<<endl;
}


int main()
{
 swapint("Juse" , "Water");

    return 0;
}
