class Solution{
public:	
	// Converts arr[0..n-1] to reduced form.
	void convert(int arr[], int n) {
	    // code here
	    priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>pq;
         for(int i=0;i<n;i++){
         pq.push({arr[i],i});
     }
     //iterate in pq and replace value
     int j=0;
     while(!pq.empty()){
         arr[pq.top().second]=j++;
         pq.pop();
     }
	}
};
