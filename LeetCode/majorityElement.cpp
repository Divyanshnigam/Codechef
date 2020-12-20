// https://leetcode.com/problems/majority-element/

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int count=0;
        int ele=0;
        for(int num: nums)
        {
            if(count==0)
            {
                ele=num;
            }
            if(ele==num)
            {
                count+=1;
            }
            else
            {
                count-=1;
            }
        }
        return ele;
    }
};
