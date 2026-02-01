#include<iostream>
using namespace std;

long long Formula(long long N)   
{
    long long Sum =0;
    Sum = N*(N+1)/2;
return Sum;    
}

int main()
{
    long long R ;
    cin >>R;
 cout<<    Formula(R)<<endl;


}