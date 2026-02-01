#include<iostream>
using namespace std;
void revers(int N)
{
    int total =0;
    while (N>0)
    {
       total=N%10;
       cout<<total<<endl;
        N /=10;
    }
  
    
}
int main()
{
    revers(1234);
    return 0;
}