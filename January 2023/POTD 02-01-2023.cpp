class Solution {
  public:
    void each(Node* node, vector<int>&ans, int level)
    {
        if(node == NULL)
        {
            return;
        }        
        if(ans.size() <= level)
        {
            ans.push_back(node->data);
        }
        else
        {
            if(ans[level] < node->data)
            {
                ans[level] = node->data;
            }
        }        
        each(node->right, ans, level+1);
        each(node->left, ans, level+1);        
        return;
    }    
    vector<int> maximumValue(Node* node) 
    {
        //code here
        vector<int>ans;
        int level = 0;        
        each(node, ans, level);        
        return ans;
    }
};
