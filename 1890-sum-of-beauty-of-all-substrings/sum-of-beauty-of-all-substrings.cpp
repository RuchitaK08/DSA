class Solution {
public:
    int beautySum(string s) {
        int ans = 0;

        for(int i = 0; i < s.size(); i++) {
            unordered_map<char, int> freq;

            for(int j = i; j < s.size(); j++) {
                freq[s[j]]++;

                int maxi = INT_MIN;
                int mini = INT_MAX;

                for(auto it : freq) {
                    maxi = max(maxi, it.second);
                    mini = min(mini, it.second);
                }

                ans += (maxi - mini);
            }
        }

        return ans;
    }
};