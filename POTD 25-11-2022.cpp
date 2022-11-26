class Solution
{
public:
    int i = 0;
    Node* GenerateTree(string str){
        string no;
        while(i <= str.size()-1 && !(str[i] == '(' || str[i] == ')')){
            no.push_back(str[i]);
            i++;
        }
        Node* root = new Node(atoi(no.c_str()));
        // Left child if is there according to string
        if(str[i] == '('){
            i++;
            root->left = GenerateTree(str);
            i++;
        }
        // Right child optionally if exist
        if(str[i] == '('){
            i++;
            root->right = GenerateTree(str);
            i++;
        }   
        return root;
    }
    // function to construct tree from string
    Node *treeFromString(string str)
    {
        if(str.size()==0)   return nullptr;
        return GenerateTree(str);
    }
};
