vlass Solution{
public:
    // This function wants you to modify the given input
    // array and no need to return anything
    // arr: input array
    // n: size of array
    //Function to rearrange  the array elements alternately.
    void rearrange(long long *arr, int n) 
    { 
    	// Your code here
    	long long m=arr[n-1]+1;
       int front=0,rear=n-1;
       for(int i=0;i<n;i++)
        {
            if(i%2==0)
            {arr[i]=arr[i]+(arr[rear]%m)*m;
            rear--;
            }
            else{
             arr[i]=arr[i]+(arr[front]%m)*m;
             front++;
            }
        }
        for(int i=0;i<n;i++){
            arr[i]=arr[i]/m;
        } 
    }
};
