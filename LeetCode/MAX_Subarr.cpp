//https://leetcode.com/problems/maximum-subarray/submissions/
//Kadane’s Algorithm

class Solution {
public:
    int maxSubArray(vector<int>& nums) 
    {
        int sum=0,maxi=INT_MIN;
        for(auto it: nums)
        {
            sum+=it;
            maxi=max(sum,maxi);
            if(sum<0)
            {
                sum=0;
            }
        }
        return maxi;
    }
};

// Time Complexity -> O(N)
// Space Complexity -> O(1)
