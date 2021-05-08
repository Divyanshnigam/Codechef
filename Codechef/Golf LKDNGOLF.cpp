#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int tc;
	cin>>tc;
	while(tc--)
	{
	    int n;
	    cin>>n;
	    int x,k;
	    cin>>x>>k;
        int d =  n+1;
        int flag = 1;
	    
            if(x % k == 0)
            {
                cout<<"YES"<<endl;
            }
            else if((d - x) % k== 0)
            {
                cout<<"YES"<<endl;
            }
            else{
                cout<<"NO"<<endl;
            }
     }
	
	return 0;
}


/*
#include <iostream>
using namespace std;
int main() 
{
    int t;
    cin>>t;
    while(t--)
    {
        long int n,x,k,i=0;
        cin>>n>>x>>k;    // 5 4 2 
      //  long int tile[n+2];
        while(i<n+2 and i!=x)   // 0 0+ <n+2 or ! same  ....4 same 
        {
           // cout<<i<<" ";
            i=i+k;       // inc  2 4 
        }
        
        if(i!=x)
        {
            i=n+1;
            while(i>=0 and i!=x)
            {
               // cout<<i<<" ";
                i=i-k;
            }
        }
        if(i==x)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
}
*/
