// sum root to leaf
#define ll long long
// ans and val name ke var ko rakho
class solution{
    

ll ans=0;
void dfs(treenode *root , ll val){
    if(!root)
    return;
    val*=10;
    val+=root->val;
    if(!root->left && !root->right)
    {
        ans+=val;
        return;
    }
    dfs(root->left, val);
    dfs(root->right , val);
}
public:
int sumnos(treenode *root){
    if(!root)
    return 0;
    dfs(root,0);
    return ans;
}
};