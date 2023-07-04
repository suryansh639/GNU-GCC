// // do traversal and count   the nodes
// tc->o(logn^2)
// sc->o(logn)

int countnodes(treenode * root){
    if(root == NULL){
        return 0;
        
    }
    int lh = findleft(root);
    int rh= findright(root);
    
    if(lh == rh) return (1<<lh) -1;
    return 1+ countnodes(root->left) + countnodes(root->right);
    int findleft(treenode * node)
    {
        int hgt=0;
        while(node){
            hgt++;
            node=node->left;
        }
        return hgt;
    }
    int findright( treenode *node){
        int hgt=0;
        while(node){
            hgt++;
            node= node->right;
        }
        return hgt;
    }
}
// the formula for it is given as A complete binary tree of height h is a proper binary tree up to height h-1, and in the 
//last level element are stored in left to right order. The height of the given binary tree is 2 and the
// maximum number of nodes in that tree is n= 2h+1-1 = 22+1-1 = 23-1 = 7. Hence we can conclude it is a perfect binary tree.