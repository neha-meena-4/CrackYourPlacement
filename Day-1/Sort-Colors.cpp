class Solution {
public:
    void sortColors(vector<int>& nums) {
        //Method-1 :- by Counting number of 0's, 1's and 2's in given vector
        int count0=0,count2=0,count1=0;
        for(int i=0;i<=n;i++)
        {
            if(nums[i]==0)
            count0++;
            else if(nums[i]==1)
                count1++;
            else
                count2++;
        }
        int i=0;
        while(count0!=0)
        {
            nums[i]=0;
            count0--;
            i++;
        }
        while(count1!=0)
        {
            nums[i]=1;
            count1--;
            i++;
        }
        while(count2!=0)
        {
            nums[i]=2;
            count2--;
            i++;
        }

        
        //Method-2 :- by using pointers low,high
        int n=nums.size()-1;
        int low=0, mid=0;
        int high= nums.size()-1;
        while(mid<=high)
        {
            if(nums[mid]==0)
            {
                swap(nums[low],nums[mid]);
                low++;mid++;
            }
            else if(nums[mid]==2)
            {
                swap(nums[high],nums[mid]);
                high--;
            }
            else{
                mid++;
            }
        }
        return ;

        
    }
};