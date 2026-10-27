class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int high=*max_element(piles.begin(),piles.end());
        int low=1;
        
        while(low<=high)
        {
            int mid=(low+high)/2;
            long long hours=0;
            for(int pile:piles)
            {
                hours+=ceil((double)pile/mid);
            }
            if(hours<=h)
            { 
                high=mid-1;
            }
            else
            {
                low=mid+1;
            }
        }return low;
    }
};