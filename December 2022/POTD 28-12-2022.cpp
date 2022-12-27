class Solution {
  public:
    // Function to find largest subtree sum.
    int findLargestSubtreeSum(Node* root)
    {
        //Write your code here
         if(root==NULL){
            return 0;
        }
        return findLargestSubtreeSum(root->left)+findLargestSubtreeSum(root->right)+root->data;
    }
};
