#include <iostream>
using namespace std;
int main() 
{
    int t;
    cin>>t;
    while(t--)
    {
        int l,r;
        cin>>l>>r;
        int count=0;
        if(l==0 and r!=0 or l!=0 and r==0)
        {
            count=2;
        }
        else if(l==r)
        {
            count=1;
        }
        else
        {
            count=3;
        }
        cout<<count<<endl;
    }    
}

