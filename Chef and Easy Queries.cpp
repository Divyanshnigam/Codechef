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
        long long int pending_queries=0;
        bool f=false;
        long long int day=0;
        for(long long int i=0;i<n;i++)
        {
            long long int x;
            cin>>x;
            pending_queries=pending_queries+x;
            if(pending_queries<k and !f)
            {
                day=i+1;
                f=true;
            }
            pending_queries=pending_queries-k;
            if(pending_queries<0)
            {
                pending_queries=0;
            }
        }
        if(!f)
        {
            day=n+1+pending_queries/k;
            cout<<day<<endl;
        }
        else
        {
            cout<<day<<endl;
        }
    }
	
	return 0;
}

