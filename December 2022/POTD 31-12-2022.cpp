class Solution {
  public:
    int minLaptops(int N, int start[], int end[]) {
        // Code here
        sort (start,start+N);
        sort(end,end+N);
        int count=1;
        int j=0;
        for(int i=1;i<N;i++){
                if(start[i]<end[j]){
                    count++;
                }
                else  {
                    j++;
                }
        }
        return count;
    }
};
