//https://www.codechef.com/problems/CHEFEZQ
#include <iostream>
using namespace std;
int main()
{
    long long int t;
    cin>>t;
    while(t--)
    {
        long long int n,k;
        cin>>n>>k;
        long long int pen=0;
        bool f=false;
        long long int day=0;
        for(long long int i=0;i<n;i++)
        {
            long long int x;
            cin>>x;
            pen=pen+x;
            if(pen<k and !f)
            {
                day=i+1;
                f=true;
            }
            pen=pen-k;
            if(pen<0)
            {
                pen=0;
            }
        }
        if(!f)
        {
            day=n+1+pen/k;
            cout<<day<<endl;
        }
        else
        {
            cout<<day<<endl;
        }
    }
	
	return 0;
}

