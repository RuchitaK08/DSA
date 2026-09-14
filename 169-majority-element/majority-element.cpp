class Solution {
public:
    int majorityElement(vector<int>& nums) {

        map<int,int> freq;

        for(int x : nums)
        {
            freq[x]++;
        }

        vector<pair<int,int>> mp(freq.begin(), freq.end());

        sort(mp.begin(), mp.end(), [](auto &a, auto &b) {
            return a.second > b.second;
        });

        return mp[0].first;
    }
};