#include <bits/stdc++.h>
using namespace std;
bool compare(int a,int b)
{
    return a>b;
}
int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        int h[n],tot_sum=0,count=0;
        for(int i=0;i<n;i++)
        {
            cin>>h[i];
            tot_sum+=h[i];
        }
        sort(h,h+n,compare);
        if(tot_sum<(2*k))
        {
            cout<<-1<<endl;    // not the case
        }
        else
        {
            int sum1=0,sum2=0,i=0,rem;
            while(sum1<k and i<n)
            {
                sum1+=h[i];
                //delete for the next tow
                h[i]=0;
                count++;
                rem=k-sum1;
                i++;
                //iterate backwards to find equal or just greater element to rem
                if(sum1<k)
                {
                    for(int j=n-1;j>=i;j--)
                    {
                        if(rem<=h[j])
                        {
                            count++;
                            sum1+=h[j];
                            //delete for the next tow
                            h[j]=0;
                            break;
                        }
                    }
                }
                
            }
            i=0;
            while(sum2<k and i<n)
            {
                if(h[i]!=0)
                {
                    sum2+=h[i];
                    count++;
                }
                i++;
                if(i==n and sum2<k)
                {
                    count=-1;
                    break;
                }
            }
            cout<<count<<endl;
        }
    }
}
