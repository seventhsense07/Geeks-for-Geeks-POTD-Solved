class Solution
{
public:
    int maxNode=0, maxGCD1=0;
    int GCD (int a, int b)
     {
         if(a==0) return b;
         else
           return GCD(b%a, a);
     }
    void Solve(Node* root)
     {
          if(root) 
        {       
        if(root->left && root->right)
          {
              int tempGCD=GCD(root->left->data, root->right->data );
              if(tempGCD == maxGCD1 )
               {
                   maxNode=max(maxNode, root->data);
               }
               else if(tempGCD > maxGCD1)
                {
                    maxGCD1=tempGCD;
                    maxNode=root->data;
                }
          }
          if(root->left) Solve(root->left);
          if(root->right) Solve(root->right);
        }
     }
    int maxGCD( Node* root)
    {
        Solve(root);
          return maxNode;
    }
};
