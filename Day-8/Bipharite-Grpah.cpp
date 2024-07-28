//In Bipharite graph every alternative node is of different color and 
//if there is a cycle with odd no of nodes then it can never be a bipharite graph

bool dfs(vector<int>adj[],int color[],int col,int startNode)
    {
        color[startNode]=col;
        
        for(auto neighbor:adj[startNode])
        {
            if(color[neighbor]==-1)
            {
                if(dfs(adj,color,!col,neighbor)==false)return false;
            }
            else if(color[neighbor]==col)
            return false;
        }
        return true;
    }
	bool isBipartite(int V, vector<int>adj[]){
	    // Code here
	    
	    int color[V];
	    for(int i=0;i<V;i++)
	    {
	        color[i]=-1;
	    }
	    for(int i=0;i<V;i++)
	    {
	        if(color[i]==-1)
	        {
	            if(dfs(adj,color,0,i)==false)return false;
	        }
	    }
	    return true;
	}
