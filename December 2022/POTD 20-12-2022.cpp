class Solution{
  public:
    int maxDistance(int arr[], int n) 
    { 
        // Complete the function
        int sum[n],diff[n];
        for(int i=0;i<n;i++){
            sum[i]=(arr[i]+i);
            diff[i]=(arr[i]-i);
        }
        int max_sum=sum[0],min_sum=INT_MAX,max_diff=diff[0],min_diff=INT_MAX;
        for(int i=0;i<n;i++){
            if(max_sum<sum[i]){
                max_sum=sum[i];
            }
            if(min_sum>sum[i]){
                min_sum=sum[i];
            }
            if(max_diff<diff[i]){
                max_diff=diff[i];
            }
            if(min_diff>diff[i]){
                min_diff=diff[i];
            }
        }
        return max(abs(max_sum-min_sum),abs(max_diff-min_diff));
    } 
};
