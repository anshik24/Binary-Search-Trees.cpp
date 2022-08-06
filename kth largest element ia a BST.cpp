class Solution
{
    public:
    void inorder(Node*root,vector<int>&v){
        if(root==NULL)
        return;
        inorder(root->left,v);
        v.push_back(root->data);
        inorder(root->right,v);
    }
    int kthLargest(Node *root, int K)
    {
        vector<int>ans;
       inorder(root,ans);
       int n=ans.size();
       return ans[n-K];
       
       
    }
};
