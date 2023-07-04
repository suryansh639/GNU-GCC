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