// https://codeforces.com/contest/1467/problem/A

#include <iostream>
using namespace std;
int main() 
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
            int i=9;
            while(n--)
            {
                cout<<i;
                i--;
                if(i==-1 and n>0)
                {
                    i=9;
                }
            }
            cout<<endl;
    }
}

