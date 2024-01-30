#include<iostream>
using namespace std;
int main()
{
int n=1234;
int rem=0,sum=0;
int count=0;
while(n>0)
{
rem=n%10;
sum=sum+rem;
count++;
n=n/10;
}
cout<<sum;
}