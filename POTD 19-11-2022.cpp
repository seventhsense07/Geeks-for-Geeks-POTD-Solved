class Solution{
    public:
        bool areAnagrams(Node *root1, Node *root2)
    { 
        if(root1 == NULL && root2 == NULL)
        return true;
        
        if((root1 == NULL && root2 != NULL) || (root1 != NULL && root2 == NULL))
        return false;
        
        if(root1->data != root2->data)
        return false;
        
      return areAnagrams(root1->right, root2->left)&&areAnagrams(root1->left, root2->right);
    }
};
