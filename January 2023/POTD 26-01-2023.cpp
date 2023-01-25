class Solution
{
    public:
    //Function to perform case-specific sorting of strings.
    string caseSort(string str, int n)
    {
        // your code here
        vector<char>s;
         vector<char>l;
         for(char c:str)
         {
             if(c>='a' && c<='z') s.push_back(c);
             else l.push_back(c);
         }
          sort(s.begin(),s.end());
          sort(l.begin(),l.end());
          string ans="";
          int k=0,m=0;
          for(char c:str)
          {
              if(c>='a' && c<='z') ans.push_back(s[k++]);
             else ans.push_back(l[m++]);
              
          }
          return ans;
    }
};
