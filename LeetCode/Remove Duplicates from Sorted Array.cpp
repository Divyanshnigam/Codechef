
//https://leetcode.com/problems/remove-duplicates-from-sorted-array/submissions/

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int next=0;
        if(nums.size()==0)
        {
            return 0;
        }
        for(int i=1;i<nums.size();i++)
        {
            if(nums[i]!=nums[next])
            {
                next++;
                nums[next]=nums[i];                
            }
        }
        nums.resize(next+1);
        return nums.size();
    }
};
