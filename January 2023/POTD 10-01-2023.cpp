class Solution {
  public:
  
    int helper(Node *&root){

        if(!root) return 0;

        int lh=helper(root->left);

        int rh=helper(root->right);

        int x=root->data;

        root->data=lh+rh;

        return x+lh+rh;

    }

    void toSumTree(Node *node)

    {

        // Your code here

        helper(node);

    }
};
