#include<iostream>
using namespace std;
int main()
{
    int n=1234;
    int rem=0;
    while(n>0)
    {
        rem=n%10;
        cout<<rem;
        n=n/10;
    }
}