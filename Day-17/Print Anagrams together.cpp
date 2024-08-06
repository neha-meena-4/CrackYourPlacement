vector<vector<string> > Anagrams(vector<string>& string_list) {
        //code here
         vector<vector<string>>v;
        string s="";
        map<string,vector<string>>mp;
        for(int i=0;i<string_list.size();i++)
        {
            s=string_list[i];
            sort(s.begin(),s.end());
             
            mp[s].push_back(string_list[i]);

        }
        for(auto i: mp)

        {
            v.push_back(i.second);
        }
        return v;
    }

