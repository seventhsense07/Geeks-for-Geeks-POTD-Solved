class Solution {
    public:
        // Function to return the length of the
        //longest subarray with ppositive product
        int maxLength(vector<int> &arr,int n){
           //code here
           int maxlen=0,cnt_neg=0,strt=0,end=0;

           int neg_pos=-1;

           for(end;end<n;end++){

               if(arr[end]==0){

                   strt=end+1;

                   cnt_neg=0;

                   neg_pos=-1;

               }

               else if(arr[end]>0){

                   if(cnt_neg&1 ){

                       maxlen=max(maxlen,end-neg_pos);

                   }

                   else 

                   {

                       maxlen=max(maxlen,end-strt+1);

                   }

               }

               else{

                   cnt_neg++;

                   if(cnt_neg==1)

                    neg_pos=end;

                   if(cnt_neg%2==0){

                       maxlen=max(maxlen,end-strt+1);

                   }

               }

           }

         return maxlen; 
        }
};
