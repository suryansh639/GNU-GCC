// // cycle detection in a undirected graph


// detect it using bfs


class solution{
    private:
    bool detect(int src,vector<int> adj[], int vis[]){
        vis[src]=1;
        queue<pair<int , int>> q;
        q.push({src, -1});
        
        while(!q.empty())
        {
            int node=q.front().first;
            int parent = q.front().second;
            q.pop();
            
            
            for(auto adjnode : adj[node])
            {
                if(!vis[adjnode]){
                    vis[adjnode] =1;
                    q.push({adjnode, node});
                }
                else if(parent !=adjnode){
                    return true;
                }
            }
        }
        return false;
    }

    
    bool iscycle(int V, vector<int> adj[])
    {
        int vis[V] = {0};
        for(int i=0; i<V;i++){
            if(!vis[V]){
                if(detect(i,adj,vis)) return true;
                
            }
        }
        return false;
    }
}