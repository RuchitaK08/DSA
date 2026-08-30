class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
        int minidx=0;
        int maxidx=0;
        int n=nums.size();
        for(int i=0;i<n;i++)
        {
            if(nums[i]<nums[minidx]) minidx=i;
            if(nums[i]>nums[maxidx]) maxidx=i;
        }
        int left=min(minidx,maxidx);
        int right=max(minidx,maxidx);
        int front=right+1;
        int back=n-left;
        int both=(left+1)+(n-right);
        return min(front,min(back,both));
        }
    
};