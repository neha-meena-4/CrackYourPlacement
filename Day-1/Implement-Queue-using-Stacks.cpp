class MyQueue {
public:
stack<int>st;
    MyQueue() {
      

    }
    
    void push(int x) {
        
        st.push(x);
        return;
    }
    
    //for pop() use 2 stacks transfer all element of 1st stack into 2nd and return top element of 2nd linked 
    //And pop top of 2nd stack and again transfer element from 2nd  stack to 1st
    int pop() {
        stack<int>temp;
         int val,ans;
        while(!st.empty())
        {
            int val=st.top();
            st.pop();
            temp.push(val);
        }
        ans=temp.top();
        temp.pop();
        while(!temp.empty())
        {
            val=temp.top();
            temp.pop();
            st.push(val);
        }
        return ans;
    }
    
     //for pop() use 2 stacks transfer all element of 1st stack into 2nd and return top element of 2nd linked 
    //And  again transfer element from 2nd  stack to 1st
    int peek() {
          stack<int>temp;
         int val,ans;
        while(!st.empty())
        {
            int val=st.top();
            st.pop();
            temp.push(val);
        }
        ans=temp.top();
        
         while(!temp.empty())
        {
            val=temp.top();
            temp.pop();
            st.push(val);
        }
        return ans;
    }
    
    //check size of stack if not 0 which means it is not empty
    bool empty() {
        if(st.size()!=0)
        return false;
        return true;
    }
};

