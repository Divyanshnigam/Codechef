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
        while(k)
        {
            
            if((x==n and y==n) or (x==0 and y==n) or (x==n and y==0) or (x==0 and y==0))
            {
                break;
            }
            else if(x==n and y!=0)
            {
                x--;
                y++;
                k--;
            }
            else if(x!=0 and y==n)
            {
                x--;
                y--;
                k--;
            }
            else if(x==0 and y!=0)
            {
                x++;
                y--;
                k--;
            }
            else if(x!=0 and y==0)
            {
                x++;
                y++;
                k--;
            }          //need to iterate ass possibily
            x++;
            y++;
        }
        cout<<x<<" "<<y<<endl;
    }    
}
