class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int min1=1000;
        string str;
        int count=0;
        //finding minm length string
        for(int i=0;i<strs.size();i++)
        {
           if(min1>strs[i].size())
            {min1=strs[i].size();
            str=strs[i];}
        }


        for(int i=0;i<min1;i++)
        {
            for(int j=0;j<strs.size();j++)
            {
                if(strs[j][i]!=str[i])///comparing every string with minm length string
                return str.substr(0,count);

            }
            count++;
        }
        return str.substr(0,count);
    }
};