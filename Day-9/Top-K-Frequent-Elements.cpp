//Using unordered map and priority queue

class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        //Store it in a unordered map;

        unordered_map<int, int>mp;
        vector<int> ans;

        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
        }

        priority_queue<pair<int, int>>pq;

        for(auto i:mp){
            pq.push({i.second, i.first});
        }

        while(k!=0){
          ans.push_back(pq.top().second);
          pq.pop();
          k--;
        }

    return ans;
    }
};