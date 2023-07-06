// // min max in bst 
// left meh ll small than root anf right meh all valur more than root

int minvalue(struct node* root){
    if(root == NULL){
        return -1;
    }
    while(root->left!=NULL){
        root=root->left;
        
    }
    return root->data;
}