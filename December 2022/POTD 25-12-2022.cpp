
class Solution {
public:
    long long int MissingNo(vector<vector<int> >& matrix) {
        // Code here
        int n= matrix.size();
        if(n==1){
            if(!matrix[0][0])
                return 1;
            else
                return -1;
        }
        long long int num; long long int max;
        vector<long long int> v;
        long long int sum=0; 
        //Find and store the sum of every rows;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                sum+=matrix[i][j];
            }
            v.push_back(sum);
            sum=0;
        }
        sort(v.begin(),v.end());
        v.erase(unique(v.begin(),v.end()),v.end());
        if(v.size()>2)
            return -1;
        else if(v.size()==2){
            num=v[1]-v[0];
            max=v[1];
        }
        v.clear();
        //Find and store the sum of the 1st diagonal;
        sum=0; int hasZero=0;
        for(int i=0;i<n;i++){
            sum+=matrix[i][i];
            if(!matrix[i][i])
                hasZero=1;
        }
        if(sum!=max && !hasZero)
            return -1;
        else if(sum!=max && hasZero && (sum+num)!=max)
            return -1;
        //Find and store the sum of the 2nd diagonal;
        sum=0; hasZero=0;
        for(int i=n-1;i>=0;i--){
            sum+=matrix[i][n-1-i];
            if(!matrix[i][n-i-1])
                hasZero=1;
        }
        if(sum!=max && !hasZero)
            return -1;
        if(sum!=max && hasZero && (sum+num)!=max)
            return -1;
        return num;
    }
};
