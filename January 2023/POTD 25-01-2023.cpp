class Solution {
  public:
    int minOperation(string str) {
        // code here
        using ll = int;

        ll i, j, count = 0, k, n = str.length();

        vector<ll> vec;

        for(i = 0;i<n;i++){

            if(str[i] == str[0] && i > 0){

                vec.push_back(i);

            }

        }

        string res = "", temp = "";

        i = 0;

        j = 1;

        

        for(auto x : vec){

            j = x;

            i = 0;

            temp = "";

            while(j < n && i < x && str[j] == str[i]){

                j++;

                temp+=str[i];

                i++;

            }

            res = temp.length() > res.length() ? temp : res;

        }

        

        count = res.length();

        if(count){

            count++;

            res+=res;

        }

        i = res.length();

        while(i < n){

            res+=str[i];

            i++;

            count++;

        }

        return count;
    }
};
