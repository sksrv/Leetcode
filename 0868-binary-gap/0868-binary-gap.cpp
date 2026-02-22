class Solution {
public:
    int binaryGap(int n) {
        vector<int> bits;

        while(n > 0){
            int rem = n % 2;
            bits.push_back(rem);
            n = n/2;
        }

        int i = 0;
        int j = i+1;
        int ans = 0;
        int res = 0;
        while((i<j) && (j<bits.size())){
           if(bits[i] == 0){
            i++;
           }
           if(bits[j] == 0){
            j++;
           }
           if((bits[i] == 1) && (bits[j] == 1)){
                ans = j-i;
                res = max(res,ans);
                i = j;
                j = i+1;
           }
        }
        return res;
    }
};