// https://leetcode.com/problems/best-time-to-buy-and-sell-stock/submissions/


// O(N^2) comlexity TLE
class Solution {
public:
    int maxProfit(vector<int>& prices) 
    {
        int n=prices.size();
        int profit,max_profit=0;
        for(int i=0;i<n;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                profit=prices[j]-prices[i];
                max_profit=max(max_profit,profit);
            }
        }
        return max_profit;
        
    }
};

//better way
class Solution {
public:
    int maxProfit(vector<int>& prices) 
    {
        int n=prices.size();
        int lsf=INT_MAX;
        int p,mp=0;
        for(int i=0;i<n;i++)
        {
            if(prices[i]<lsf)
            {
                lsf=prices[i];
            }
            p=prices[i]-lsf;
            mp=max(mp,p);
        }
        return mp;        
    }
};


