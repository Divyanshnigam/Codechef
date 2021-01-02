#include <iostream>
using namespace std;
int main() 
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k,x,y;
        cin>>n>>k>>x>>y;
        if(k > 4)
        {
           k = k%4;
        }
        
        if(x == y)                            //case 1:
        {
            cout<<n<<" "<<n<<endl;
        }
        else                                  // case 2:
        {
            if(x<y)
                {
                //  cout<<x<<" "<<y<<endl;
                while(k)
                {
                    // cout<<x<<" "<<y<<endl;
                    
                    while(y != n)
                    {
                    
                        x++;
                        y++;
                        // cout<<x<<" "<<y<<endl;
                    }
                    
                    k--;
                    if(k==0 or (x==n and y==n) or (x==0 and y==n) or (x==n and y==0) or (x==0 and y==0))
                    {
                        //   cout<<x<<" break "<<y<<endl;
                        break;
                    }
                    
                    while(x != n)
                    {
                        
                        x++;
                        y--;
                        // cout<<x<<" "<<y<<endl;
                        
                    }
                    
                    k--;
                    
                    if(k==0 or (x==n and y==n) or (x==0 and y==n) or (x==n and y==0) or (x==0 and y==0))
                    {
                        break;
                    }
                    while(y != 0)
                    {
                        x--;
                        y--;
                    //     cout<<x<<" "<<y<<endl;
                        
                        
                    }
                    
                    k--;  
                    if(k==0 or (x==n and y==n) or (x==0 and y==n) or (x==n and y==0) or (x==0 and y==0))
                    {
                        break;
                    }
                    while(x != 0)
                    {
                        x--;
                        y++;
                        
                        // cout<<x<<" "<<y<<endl;
                        
                    }
                    k--;
                    if(k==0 or (x==n and y==n) or (x==0 and y==n) or (x==n and y==0) or (x==0 and y==0))
                    {
                        break;
                    }
                
                }
                cout<<x<<" "<<y<<endl;
            }
            else
            {
                while(k)
                {
                    // cout<<x<<" "<<y<<endl
                    
                    while(x != n)
                    {
                        
                        x++;
                        y++;
                    //    cout<<x<<" "<<y<<endl;
                        
                    }
                    k--;
                    
                    if(k==0 or (x==n and y==n) or (x==0 and y==n) or (x==n and y==0) or (x==0 and y==0))
                    {
                        break;
                    }
                    
                    while(y != n)
                    {
                    
                        x--;
                        y++;
                        // cout<<x<<" "<<y<<endl;
                    }
                    k--;
                    if(k==0 or (x==n and y==n) or (x==0 and y==n) or (x==n and y==0) or (x==0 and y==0))
                    {
                        //   cout<<x<<" break "<<y<<endl;
                        break;
                    }
                    while(x != 0)
                    {
                        x--;
                        y--;
                    //     cout<<x<<" "<<y<<endl;
                        
                        
                    }
                    k--;  
                    if(k==0 or (x==n and y==n) or (x==0 and y==n) or (x==n and y==0) or (x==0 and y==0))
                    {
                        break;
                    }
                    
                    while(y != 0)
                    {
                        x++;
                        y--;
                        // cout<<x<<" "<<y<<endl;
                        
                    }
                    k--;
                    if(k==0 or (x==n and y==n) or (x==0 and y==n) or (x==n and y==0) or (x==0 and y==0))
                    {
                        break;
                    }
                }
            cout<<x<<" "<<y<<endl;
            }
        }
    }
}    
