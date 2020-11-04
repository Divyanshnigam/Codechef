//https://www.codechef.com/OCT20B/problems/POSAND
#include<bits/stdc++.h>
using namespace std;
int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
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
	        for(int i=4;i<=n;i++)
	        {
	            if(ceil(log2(n)) == floor(log2(n)))
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

