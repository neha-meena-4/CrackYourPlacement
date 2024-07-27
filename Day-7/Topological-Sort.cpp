

    void dfsTopo(vector<int> adj[], vector<bool>&visited,stack<int>&st,int startNode)
	{
	    visited[startNode]=true;
	    for(int neighbor: adj[startNode])
	    {
	        if(!visited[neighbor])
	        
	            dfsTopo(adj,visited,st,neighbor);
	        
	       
	    }
	    st.push(startNode);
	}
	vector<int> topoSort(int V, vector<int> adj[]) 
	{
	    // code here
	    vector<bool>visited(V,0);
	    stack<int>st;
	    for(int i=0;i<V;i++)
	    {
	        if(!visited[i])
	        {
	            dfsTopo(adj,visited,st,i);
	        }
	    }
	    vector<int>ans;
	    while(!st.empty())
	    {
	        ans.push_back(st.top());
	        st.pop();
	    }
	    
	   return ans;
	}