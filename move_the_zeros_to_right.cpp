#include<iostream>
using namespace std;

int main()
{
    int a[]={12,0,3,0,0,1,2},n=7;
    int count = 0;
    for(int i=0;i<n;i++)
        {
            
            if(a[i]==0)
            {
                count++;
                // temp=a[i+1];
                // a[i+1]=a[i];
                // a[i]=temp;
            }
        }
    for(int i=0;i<n;i++)
        {
            if(a[i] != 0)
            cout<<a[i]<<" ";
        }
    for(int i=0;i<count;i++)
        {
            cout<<0<<" ";
        }
        
}