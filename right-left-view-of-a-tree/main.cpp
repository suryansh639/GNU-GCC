// dont use level order traversal

// we use reverse preorder traversal

vector<int> rightsideview(treenode *root){
    vector<int> res;
    recursion (root , 0 , res);
    right res;
    
}
public:
void recursion(treenode *root , int level , vector <int> &res){
    if(root == NULL) return;
    if(res.size() == level) res.push_back(root->val);
    recursion(root->right , level+1 , res);
    recursion(root->left , level+1, res);
    
}