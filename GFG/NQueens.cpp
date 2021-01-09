#include <iostream>
using namespace std;
bool is_safe(int cb[][100],int n,int r,int c)
{
    //for that colu
    for(int i=r-1,j=c;i>=0;i--)
    {
        if(cb[i][j]==1)
        {
            return false;
        }
    }
    //for the bottom left to top left..
    for(int i=r-1,j=c-1;i>=0 and j>=0;i--,j--)
    {
        if(cb[i][j]==1)
        {
            return false;
        }
    }
    
    //for the bottom right to top right..
    for(int i=r-1,j=c+1;i>=0 and j<n;i--,j--)
    {
        if(cb[i][j]==1)
        {
            return false;
        }
    }
    return true;
}
void solve(int cb[][100],int n,int r,string asf)
{
    if(r==n)
    {
        cout<<"["<<asf<<"]"<<endl;
        return;
    }
    for(int c=0;c<n;c++)
    {
        if(is_safe(cb,n,r,c)==true)
        {
            cb[r][c]=1;
            solve(cb,n,r+1,asf + to_string(c) + " ");
            cb[r][c]=0;
        }
    }
    
}
int main() {
	int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int cb[100][100]={0};
        solve(cb,n,0,"");
    }
	return 0;
}
