class Solution {
  public:
    int ans;
    int give_me_sum(Node * root){
        if(!root)return 0;
        int left = give_me_sum(root -> left);
        int right = give_me_sum(root -> right);
        ans = max(ans , left + right + root -> data);
        return left + right + root -> data;
    }
    int findLargestSubtreeSum(Node* root)
    {
        //Write your code here
        ans = INT_MIN;
        give_me_sum(root);
        return ans;
    }
};
