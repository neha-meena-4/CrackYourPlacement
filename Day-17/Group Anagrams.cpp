class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {   
        vector<vector<string>>v;
        string s="";
        unordered_map<string,vector<string>>mp;
        for(int i=0;i<strs.size();i++)
        {
            s=strs[i];
            sort(s.begin(),s.end());
             
            mp[s].push_back(strs[i]);

        }
        for(auto i: mp)

        {
            v.push_back(i.second);
        }
        return v;
        
    }
};
