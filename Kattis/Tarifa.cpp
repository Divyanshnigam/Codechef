//https://open.kattis.com/problems/tarifa

#include<iostream>
using namespace std;
int main()
{
    int x,n,a[n];
    cin>>x>>n;
    int sum=0;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        sum+=a[i];
    }
    int tx=x*(n+1);
    cout<<tx-sum;
    
}
