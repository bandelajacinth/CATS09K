#include<iostream>
using namespace std;
int main()
{
    int base,power;
    cin>>base>>power;
    int ans=1;
    while(power>0)
    {
        ans=ans*base;
        power--;
    }
    cout<<ans;
}
