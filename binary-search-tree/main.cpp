// // // // // L<N<R
// // // // LEFT SUBTREE ->BST
// // // // RIGHT SUBTREE-> BST

// // // ideally duplicates not allowed in BST

// // BST SEARCH TIME IS OF ORDER Olog2N

// now we will search in a BST

public:
treenode * searchbst(treenode* root , int val)
{
    while(root!=NULL && root->val !=val){
        root = val < root->val?root->left : root->right;
    }
    return root;
    
}