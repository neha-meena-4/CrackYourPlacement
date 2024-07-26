class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        
        int i=m-1; int j=n-1; int k=n+m-1;
        while(k>=0)
        {
            auto a=i<0?INT_MIN:nums1[i];
            auto b=j<0? INT_MIN:nums2[j];
            if(a>b)
            {
                nums1[k--]=nums1[i--];
            }
            else{
                nums1[k--]=nums2[j--];
            }
        }
       
    }
};