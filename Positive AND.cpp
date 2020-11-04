#include<bits/stdc++.h>
using namespace std;

int main() 
{
    cin.tie(NULL);
	long long int t;
	cin>>t;
	while(t--)
	{
	    long long int n;
	    cin>>n;
	    if(n==1)
	    {
	        cout<<"1"<<endl;
	    }
	    else if(ceil(log2(n)) == floor(log2(n)))
	    {
	        cout<<"-1"<<endl;
	    }
	    else
	    {
	        cout<<"2 3 1 ";
	        for(long long int i=4;i<=n;i++)
	        {
	            if(ceil(log2(i)) == floor(log2(i)))
	            {
	                cout<<i+1<< " "<<i<<" ";
	                i++;
	            }
	            else
	            {
	                cout<<i<<" ";
	            }
	        }
	        cout<<endl;
	   }
	   
	}
	return 0;
}

