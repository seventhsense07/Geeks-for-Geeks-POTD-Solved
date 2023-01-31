class Solution {
  public:
    int minRepeats(string A, string B) {
        // code here
        string s=A;
        int c=1;
        if(A==B)return c;
        while(A.length()<B.length()){
            A+=s;
            c++;
        }
       if(A.find(B)!=string::npos)return c;
       else if((A+s).find(B)!=string::npos)return c+1;
       
        return -1;
    }
};
