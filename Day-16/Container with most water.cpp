class Solution {
public:
    int maxArea(vector<int>& height) {
        int maxi=0;
        int l=0, r=height.size()-1;
        while(l<r)
        {
            int mini=0;
            mini=min(height[l],height[r]);
            maxi=max(maxi,mini*(r-l));
            if(height[l]<height[r])
                l++;
            else
                r--;
        }
        return maxi;
    }
};
