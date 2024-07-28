class Solution {
public:
    int findCheapestPrice(int n, vector<vector<int>>& flights, int src, int dst, int k) {
        
        vector<pair<int,int>>adj[n];//pair{node,cost}
        for(auto it:flights)
        {
            adj[it[0]].push_back({it[1],it[2]});
        }

        //we can use queue instead of priority queue to as stops value is inc by fixed value=1
        queue<pair<int,pair<int,int>>>q;
        //pair{stop,{node,cost}}
        q.push({0,{src,0}});

        vector<int>dist(n,1e9);//to store minimum cost for particular node
        dist[src]=0;
        while(!q.empty())
        {
            auto it=q.front();
            q.pop();
            int stops=it.first;
            int node=it.second.first;
            int cost=it.second.second;

            if(stops>k)continue;

            for(auto iter: adj[node])
            {
                int adjNode= iter.first;
                int edW=iter.second;

                if((cost + edW < dist[adjNode] )&& stops<=k)
                {
                    dist[adjNode]=cost+ edW;
                    q.push({stops+1,{adjNode,cost+edW}}); //inc stop vale & updating cost
                }

            }
        }
        if(dist[dst]==1e9)return -1;//when destination node not found
        return dist[dst];
    }
};