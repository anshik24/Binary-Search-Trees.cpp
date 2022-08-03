class Solution{
  public:
    // The given root is the root of the Binary Tree
    // Return the root of the generated BST
    void inorder_tree(Node* root,vector<int> &v){
      if(!root)return ;
         inorder_tree(root->left,v);
         v.push_back(root->data);
         inorder_tree(root->right,v);
        
    }
    void inorderBST(Node* root,vector<int> v,int &i){
        if(!root)return ;
         inorderBST(root->left,v,i);
         root->data=v[i];
         i++;
         inorderBST(root->right,v,i);
    }
    Node *binaryTreeToBST (Node *root)
    {
        vector<int> v;
inorder_tree(root,v);
sort(v.begin(),v.end());
int i=0;
inorderBST(root,v,i);

return root;

    }
};
