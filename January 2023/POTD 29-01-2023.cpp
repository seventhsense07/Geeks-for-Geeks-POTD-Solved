class Solution {
  public:
    int solve(int a, int b) {
        // code here
        if(a==b) return 0;
        else if((a|b)==a || (a|b)==b) return 1;
        else return 2;
    }
};
