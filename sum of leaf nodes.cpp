int sumOfLeafNodes(Node *r ){
     if(r==NULL)
     return 0;
     if(r->left==NULL && r->right==NULL)
     return r->data;
     return sumOfLeafNodes(r->left)+ sumOfLeafNodes(r->right);
}
