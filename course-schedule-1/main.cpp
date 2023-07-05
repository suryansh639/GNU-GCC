// course schedule 1
// one task should be completed before other
// cyclic depency should not be there

// we can use topo sort here

bool ispossible(int n , vector<pair<int , int > &pre){
    vector<int> adj[n];
    for(auto it : pre){
        adj[it.first].push_back(it.second);
    }
    
    int indegree[V] ={0};
    for (int i=0;i<v;i++)
    {
        for(auto it : adj[i]){
            indegree[it]++;
        }
    }
    queue<int> q;
    for(int i=0;i<v;i++){
        if(indegree[i] ==0){
            q.push(i);
        }
    }
    vector<int > topo;
    while(!q.empty()){
        int node - q.front();
        q.pop();
        top.push_back(node);
        
        for(auto it : adj[node]){
            indegree[it]--;
            if(indegree[it] == 0) q.push(it);
        }
    }
    if(topo.size() == V) return true;
    return false;
    
    
    
    
    
}