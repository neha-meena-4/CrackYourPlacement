//PRIMS ALGORITHM
int spanningTree(int V, vector<vector<int>> adj[]) 
    {
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;

    vector<int> vis(V, 0);
    // {wt, node}
    pq.push({0, 0});
    int sum = 0;

    while (!pq.empty()) {
        auto current = pq.top();
        pq.pop();
        int node = current.second;
        int wt = current.first;

        if (vis[node] == 1) continue;

        // Add it to the MST
        vis[node] = 1;
        sum += wt;

        for (auto neighbor : adj[node]) {
            int adjNode = neighbor[0];
            int edgeWeight = neighbor[1];
            if (!vis[adjNode]) {
                pq.push({edgeWeight, adjNode});
            }
        }
    }

    return sum;