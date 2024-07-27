void dfs(vector<bool> &visited,vector<int> adj[],int startNode,vector<int>&ans)
    {
            visited[startNode]=true;
            ans.push_back(startNode);
            
        for(int neighbor:adj[startNode])
        {
            if(!visited[neighbor])
            {
                dfs(visited,adj,neighbor,ans);
            }
        }
    }
    vector<int> dfsOfGraph(int V, vector<int> adj[]) {
        // Code here
        vector<bool>visited(V,false);
        vector<int>ans;
        for (int i = 0; i < V; i++) {
        if (!visited[i]) {
            dfs(visited, adj,i, ans);
        }
        }
        return ans;
    }