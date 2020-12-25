//https://leetcode.com/problems/max-consecutive-ones/submissions/

class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int count=0,maxOnes=0;
        for(int i=0;i<nums.size();i++)
        {
            
            if(nums[i]==1)
            {
                count++;
                maxOnes=max(maxOnes,count);
            }else{
                count=0;
            }
        }
        return maxOnes;
    }
};
