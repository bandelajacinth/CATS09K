#include<iostream>
using namespace std;
int main()
{
    int num;
    cin>>num;
    int count=0;
    int flag = 1;
    for(int i=2;i<num;i++)
    {
        if(num%i==0)
        {
            flag = 0;
        }
    }
 if(flag){
    cout<<"prime";
 }else{
    cout<<"not a prime";
 }
}