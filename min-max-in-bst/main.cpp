// // min max in bst 

int minvalue(struct node* root){
    if(root == NULL){
        return -1;
    }
    while(root->left!=NULL){
        root=root->left;
        
    }
    return root->data;
}
// min in left and max in right
