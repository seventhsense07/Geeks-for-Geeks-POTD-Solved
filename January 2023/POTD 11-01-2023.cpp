class Solution {
  public:
    long long int minIncrements(vector<int> arr, int N) {
        // Code here
        int cnt=0;
        sort(arr.begin(),arr.end());
        for(int i=1;i<N;i++){
            if(arr[i]<=arr[i-1]) {
                int val = arr[i];
                arr[i]=arr[i-1]+1;
            cnt+= arr[i-1]-val+1;}
        }
        return cnt;
    }
};
