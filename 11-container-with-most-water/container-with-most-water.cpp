class Solution {
public:
    int maxArea(vector<int>& height) {
       int ans=0;
       int lp=0;
       int wd=0;int ht=0;
       int rp=height.size()-1;
       while(lp<rp)
       {
        wd=rp-lp;
        ht=min(height[lp],height[rp]);
        int area=wd*ht;
        ans=max(ans,area);
        height[lp]<height[rp]?lp++:rp--;

       } return ans;
    }
};