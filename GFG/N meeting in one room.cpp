https://www.geeksforgeeks.org/find-maximum-meetings-in-one-room/

#include<bits/stdc++.h>
using namespace std;
class meeting{
    public:
        int start;
        int end;
        int pos;
};

bool compare(meeting m1, meeting m2)
{
    return (m1.end < m2.end);
}

void maxMeeting(int *s,int *f,int n)
{
    meeting meet[n];
    for(int i=0;i<n;i++)
    {
        meet[i].start=s[i];
        meet[i].end=f[i];
        meet[i].pos=i+1;
    }
    //sort
    sort(meet,meet+n,compare);
    vector<int >m;
    m.push_back(meet[0].pos);
    int TimeLimit=meet[0].end;
    for(int i=1;i<n;i++)
    {
        if(meet[i].start>=TimeLimit)
        {
            m.push_back(meet[i].pos);
            TimeLimit=meet[i].end;
        }
    }
    for(int i=0;i<m.size();i++)
    {
        cout<<m[i]<<" ";
    }
}

int main() 
{ 
    // Starting time 
    int s[] = { 1, 3, 0, 5, 8, 5 }; 
     
    // Finish time 
    int f[] = { 2, 4, 6, 7, 9, 9 }; 
     
    // Number of meetings. 
    int n = sizeof(s) / sizeof(s[0]); 
 
    // Function call 
    maxMeeting(s, f, n); 
 
    return 0; 
} 
