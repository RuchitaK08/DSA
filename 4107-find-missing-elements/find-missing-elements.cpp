class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        int mina=*min_element(nums.begin(),nums.end());
        int maxa= *max_element(nums.begin(),nums.end());
        set<int>s(nums.begin(),nums.end());
        vector<int>ans;
        for(int i=mina+1;i<maxa;i++)
        {
            if(!s.count(i))
            {
                ans.push_back(i);
            }
        }return ans;
    }
};