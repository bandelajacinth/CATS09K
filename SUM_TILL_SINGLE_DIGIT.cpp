#include<iostream>
using namespace std;
int totalsum(int num){
    int n = num;
    int count = 0;
    while(num>0){
        count++;
        num /= 10;
    }
    if(count != 1){
        int sum = 0;
        while(n > 0){
            sum += n % 10;
            n /= 10;
        }
        return totalsum(sum);
    }
    return n;
}
int main()
{
    int n;
    cin>>n;
    int y = totalsum(n);
    cout<<y;

}