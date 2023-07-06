// // cycle detection using dfs previously we do it using bfs


// if node not visited call the dfs for it 

private:
bool dfs(int node, int parent, vector<int> vis[] , vector<int> adj[])
{
    vis[node]=1;
    for(auto adjacentnode : adj[node])
    {
        if(!vis[adjacentnode]){
            if(dfs(adjacentnode , node, vis,adj)==true) 
            return true;
    }
    else if(adjacentnode!=parent) return true;
}
return false;
}
public:
// if there are multiple components
bool iscycle(){
    int vis[v]={0};
    for(int i=0;i<v;i++)
    {
        if(!vis[i]){
            if(dfs(i,-1,vis,adj) == true) return true;
        }
    }
    return false;
}



space complexity->  O(N)
TC->      O(N+2E)+O(N)