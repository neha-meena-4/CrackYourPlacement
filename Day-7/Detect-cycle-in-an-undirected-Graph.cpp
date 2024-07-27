//IF THE NODE IS ALREADY VISITED AND IT IS NOT EQUAL TO PARENT THEN THERE IS CYCLE PRESENT IN IT 
 
 bool dfsCycle(vector<bool>&visited, vector<int> adj[],int startNode,int parent)
    {
        visited[startNode]=true;
        for(int neighbor: adj[startNode])
        {
            if(!visited[neighbor])
            {
                if(dfsCycle(visited,adj,neighbor,startNode)==true)
                    return true;
            }
            else if(neighbor !=parent)
            {
                return true;
            }
        }
        return false;
    }
    
    bool isCycle(int V, vector<int> adj[]) {
        // Code here
        vector<bool>visited(V,false);
        for(int i=0;i<V;i++)
        {
            if(!visited[i])
            {if(dfsCycle(visited,adj,i,-1)==true) return true;}
        }
        return false;
    }
};