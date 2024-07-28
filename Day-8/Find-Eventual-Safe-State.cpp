class Solution {
public:
    /*
        A node is a terminal node if there are no outgoing edges.
        A node is a safe node if every possible path starting from that node leads to a terminal node
        (or another safe node).

    */
    
    
    vector<int> eventualSafeNodes(vector<vector<int>>& graph) {
        
        int V=graph.size();
        vector<int>indegree(V,0);
        vector<int>revGraph[V];

        //Reversing adjacency list and counting indegree
        for(int i=0;i<V;i++)
        {
            //i->it
            for(auto it:graph[i])
            {
                //it->i
                revGraph[it].push_back(i);
                indegree[i]++;
            }
        }

        //pushing in stack
        queue<int>q;
        for(int i=0;i<V;i++)
        {
            if(indegree[i]==0)
            q.push(i);
        }

        vector<int>ans;
        while(!q.empty())
        {
            int node=q.front();
            q.pop();
            ans.push_back(node);

            for(auto it: revGraph[node])
            {
                indegree[it]--;
                if(indegree[it]==0)
                {
                    q.push(it);
                }
                
            }
        }
        sort(ans.begin(),ans.end());
        return ans;

    }
};