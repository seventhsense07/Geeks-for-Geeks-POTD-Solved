class Solution {
  public:
    int minVal(int a, int b) {
        // code here
        int cntInB = 0;
        while(b){
            if(b % 2){
                cntInB++;
            }
            b /= 2;
        }
        int ans = 0;
        for(int i = 30;(i >= 0 && cntInB > 0); i--){
            if((1 << i) & a){
                ans += (1 << i);
                cntInB--;
            }
        }
        int i = 0;
        while(cntInB){
            if(((1 << i) & a) == 0){
                ans += (1 << i);
                cntInB--;
            }
            i++;
        }
        return ans;
    }
};
