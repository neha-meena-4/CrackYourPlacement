//IN DIRECTED GRAPH IT IS SAID TO BE CYCLIC IF CYCLE IS PRESENT ON SAME PATH(NOT ON BACKTRACKING PATH)

bool dfsCycle(vector<bool> &visited, vector<int> adj[], vector<bool> &Pathvisited, int startNode) {
    visited[startNode] = true;
    Pathvisited[startNode] = true;

    for (auto neighbor : adj[startNode]) {
        if (!visited[neighbor]) {
            if (dfsCycle(visited, adj, Pathvisited, neighbor) == true)
                return true;
        } else if (Pathvisited[neighbor]) {
            return true;
        }
    }

    Pathvisited[startNode] = false;
    return false;
}

bool isCyclic(int V, vector<int> adj[]) {
    vector<bool> visited(V, false);
    vector<bool> Pathvisited(V, false);


    for (int i = 0; i < V; i++) {
        if (!visited[i]) {
            if (dfsCycle(visited, adj, Pathvisited, i) == true) // Start DFS from node i
                return true;
        }
    }
    return false;
}
