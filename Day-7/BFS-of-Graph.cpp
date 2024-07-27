void bfs(vector<bool> &visited, vector<int> adj[], vector<int> &ans, int startNode) {
    queue<int> q;
    q.push(startNode);
    visited[startNode] = true;
    while (!q.empty()) {
        int val = q.front();
        q.pop();
        ans.push_back(val);
        for (int neighbor : adj[val]) {
            if (!visited[neighbor]) {
                visited[neighbor] = true;
                q.push(neighbor);
            }
        }
    }
}

// Function to return Breadth First Traversal of given graph.
vector<int> bfsOfGraph(int V, vector<int> adj[]) {
    vector<int> ans;
    vector<bool> visited(V, false);
    
    bfs(visited, adj, ans, 0);
        
    
    return ans;
}
[GitHub](https://github.com/YourGitHubUsername/CrackYourPlacement)

