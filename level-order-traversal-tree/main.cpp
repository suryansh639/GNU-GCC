vector<int> levelorder(node *node)
{
    vector <int > ans;
    if(node == null)
    {
        return ans;
        
    }
    
    queue<node*>q;
    q.push(node)
    while(!q.empty()){
        node *temp= q.front();
        q.pop()
        ans.push_back(temp->data)
        if(temp->lleft)
        [
            q.push(temp->left)
            else
            {
                q.push(temp->right)
                
            }
    }
    return ans;
    
}
