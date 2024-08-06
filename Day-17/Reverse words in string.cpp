class Solution {
public:
    string reverseWords(string s) {
        int i = 0;
        int n = s.size();
        vector<string> v;
        
        
        while (i < n){            
            string res = "";
            
            while (i < n && s[i] == ' ') i++;
            while (i < n && s[i] != ' ') res+=s[i++];
            
            if (res == "" || res == " ") continue;
            v.push_back (res);
        }
        
        reverse (v.begin (), v.end ()); // change 1
        string ans = v[0];
        
        for (int i = 1; i < v.size(); i++){
            
            ans += (" " + v[i]); // change 2
        }
        
        return ans;


    //     int s_size = s.size() , i;
    //     string result ; 
    //     int counter=0, space=0 , flag=0 ;   
    //     for(i=s_size-1 ; i>=0 ; i--){

    //        if(s[i]!=' '){  
    //           flag = 1 ; 
    //           result.insert(result.begin()+space , s[i]);
    //           counter++;                              
    //         }

    //         else { 
    //             if(flag==1){
    //             space = counter;
    //             result.insert(result.begin()+space,' ');  
    //             counter++;                                
    //             space++;                                
    //             flag++;     
                                
    //             }
    //         }
    //     }
 
    //     if (result.back() == ' ') {
    //     result.pop_back();
    // }
    //     return result;
    }
};
