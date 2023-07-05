// LCA
// THE ONE WHICH IS AT DEEPEST LEVEL ANCESTOR IS KNOWN AS LCA


// we follow dfs traversal in left and right
class solution{
    public:
    treenode * lca(treenode *root , treenode *p , treenode *q){
        if(root==NULL || root==p || root == q)){
            return root
        }
        treenode *left=lca(root->left , p ,q);
        treenode *right=lca(root->right , p , q);
        if(left== NULL)
        {
            return right;
        }
        else if(right == NULL){
            return left;
        }
        else
        {
            return root;
        }
    }
}





