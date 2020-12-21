//https://leetcode.com/problems/reverse-pairs/

class Solution {
public:
    int reversePairs(vector<int>& nums) 
    {
        int n=nums.size();
        return mergesort(nums,0,n-1);
    }
    int mergesort(vector<int>& nums,int lo,int hi)
    {
        if(lo>=hi)
        {
            return 0;
        }
        int mid =(lo + hi)/2;
        int count = 0;
        count+= mergesort(nums,lo,mid);
        count+= mergesort(nums,mid+1,hi);
        count+= merge(nums,lo,mid,hi);
        
        return count;
    }
    int merge(vector<int>&nums,int lo,int mid,int hi)
    {
        int p=lo,q=mid+1;
        int a[hi-lo+1];
        int index = 0,count=0;
        
        while(p<=mid and q<=hi)
        {
            if((long long)nums[p] > (long long)2*(long long)nums[q])
            {
                count+=mid-p+1;
                q++;
            }
            else
            {
                p++;
            }
        }
        p=lo;
        q=mid+1;
        while(p<=mid and q<=hi)
        {
            if(nums[p] < nums[q])
            {
                a[index++]= nums[p++];
            }
            else
            {
                a[index++]= nums[q++];                
            }
        }
        while(p <= mid)
        {
            a[index++] = nums[p++];
        }
        while(q <= hi)
        {
            a[index++] = nums[q++];
        }
        int k = lo;
        for(int i = 0; i < hi-lo+1; i++) 
        {
            nums[k++] = a[i];
        }
        return count;
    }
};


