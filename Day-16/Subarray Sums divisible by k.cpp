class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {

        // when  x= k * y +rem & u=k*t + rem  when rem are equl then, x-u = k(y-t)  it is divisible by k
        int count=0;
        unordered_map<int,int>mp;
        mp[0]=1;
        int sum=0;
        for(int it:nums)
        {
            sum += it;
            int remainder= sum%k;
            if(remainder<0)
                remainder+=k;
            if(mp.find(remainder)!=mp.end())
            {
                count += mp[remainder];
               
            }
            mp[remainder]++;
        }
        return count;
    }
};        
            
