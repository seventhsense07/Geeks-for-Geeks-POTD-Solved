class Solution{
public:
	vector<int> findSubarray(int a[], int n) {
	    // code here
	    int s=0, e=0, ms=-1, me=-1, l=0;
	    long long sum=0, maxs=0;
	    for(int i=0;i<n; i++)
	    {
	        if(a[i]<0){
	            sum=0;
	            e=i+1;
	            s=i+1;
	        }
	        else
	        {
	            sum+=a[i];
	            if(sum>=maxs){
	                if(sum>maxs)
	                {
	                    ms=s;
	                    me=i;
	                }
	                else
	                {
	                    if(i-s+1>l)
	                    ms=s;
	                    me=i;
	                }
	                maxs=sum;
	                l=me-ms+1;
	            }
	        }
	    }
	    if(ms==-1 and me ==-1) return {-1};
	    vector<int> res;
	    for(int i=ms;i<=me;i++){
	        res.push_back(a[i]);
	    }
	    return res;
	}
};
