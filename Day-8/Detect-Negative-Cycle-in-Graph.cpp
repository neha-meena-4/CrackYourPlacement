/*BELLMAN FORD ALGO(single source shortest path algo) IS USED AND IT OVERCOME LIITATION OF DIJIKSTRA THAT DONOT WORK FOR NEGATIVE CYCLE 
AS IT WILL GO INTO INFINITE LOOP;
applicable to only DIRECTED GRAPH or for undirect make cycle btw 2 node 
if pathweight of cycle<0 = neg cycle  (dijikstra might show TLE in this case)
*/

vector<int> bellman_ford(int V, vector<vector<int>>& edges, int S) {
        // Code here
        vector<int> dist(V, 1e8);
        dist[S]=0;
        
        for(int i=0;i<V-1;i++)
        {
            for(auto it: edges)
            {
                int u=it[0];
                int v=it[1];
                int wt= it[2];
                if(dist[u] != 1e8 && dist[u] + wt < dist[v])
                {
                    dist[v]= dist[u] + wt;
                }
            }
        }
        
        for(auto it: edges){
            int u=it[0];
            int v=it[1];
            int wt= it[2];
            if(dist[u] != 1e8 && dist[u] + wt < dist[v])
                return {-1};
        }
        return dist;
    }
