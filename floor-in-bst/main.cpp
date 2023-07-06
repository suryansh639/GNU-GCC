// floor in a bst

// here we find value smaller than or equal to the key 

// val<=key
//  ok lets code this up

int floor=-1;
while(root){
    
    if(root->val == key){
        floor =root->val;
        return floor;
    }
    if(key>root->val){
        floor=root->val;
        root=root->right;
    }
    else
    {
        root = root->left;
    }
}
return floor;
}
