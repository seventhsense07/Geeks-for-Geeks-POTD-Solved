class Solution
{
    public:
    int count =0;
    int get_val(Node* root){
        if(root==NULL)return 1;
        if(root->left==NULL && root->right == NULL){
            count++;
            return root->data;
        }
        int l;
        if(root->left != NULL){
            l = get_val(root->left);
        }else{
            l = root->data;
        }
        int r;
        if(root->right != NULL){
            r = get_val(root->right);
        }else{
            r = root->data;
        }
        if(l==r && l == root->data){
            count++;
            return root->data;
        }else{
            return -1;
        }
    }
    int singlevalued(Node *root)
    {
        //code here
        int a = get_val(root);
        return count;
    }
    
};
