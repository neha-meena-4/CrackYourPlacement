class Solution {
public:
    bool isValid(string str) {
        int n=str.length();
    if(str.length()%2 !=0) return false;//odd can never be valid

    //Method-1:- Using switch statement
        for(int i=0;i<(str.length()-1)/2;i++)
        {
            switch(str[i])
            {
                case '{': if(str[n-i]!='}') 
                        {return false;} break;
                case '[' :if(str[n-i]!=']') 
                        {return false;} break;
                case '(':if(str[n-i]!=')') 
                        {return false;} break;
                default:
                    return false;
            }
        }
        return true;
   
    //Method-2:- Using stack
        stack<char>st;
        for(int i=0;i<str.length();i++)
        {
            
            if(str[i]=='(' || str[i]== '['|| str[i]=='{')
            { st.push(str[i]);
            
            }
            else if(st.empty()) {return false;}
            else if((str[i]==')' &&st.top()!='(' )|| (str[i]==']' && st.top()!='[' )|| (str[i]=='}' && st.top()!='{'))
            {
                return false;
            }
            else
            st.pop(); 
        }  
        return st.empty();   
    }
};