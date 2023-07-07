// also known as dfs but kahn algo if used bfs


// put it in stack
private:
void dfs(int node , int vis[] , stack<int> &st, vector<int> adj[]){
    vis[node]=1;
    for(auto it: adj[node]){
        if(!vis[it]) 
        dfs(it,vis,st,adj);
    }
    st.push(node);
    
}



public:
vector<int> toposort(int V , vector<int>adj[]){
    int vis[v] = {0};
    stack<int> st;
    for(int i=0;i<v;i++){
        if(!vis[i]){
            dfs(i , vis , st , adj);
        }
    }
    vector<int> ans;
    while(!st.empty()){
        ans.push_back(st.top());
        st.pop();
        
    }
    return ans;
    
}
