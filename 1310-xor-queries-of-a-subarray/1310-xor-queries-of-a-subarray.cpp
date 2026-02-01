class Solution {
public:
    vector<int> xorQueries(vector<int>& arr, vector<vector<int>>& queries) {
        vector<int> prefix(arr.size());
        vector<int> res;

        prefix[0] = arr[0];

        for(int i=1;i<arr.size();i++){
            prefix[i] = prefix[i-1] ^ arr[i];
        }

        for(int i = 0;i<queries.size();i++){
            int l = queries[i][0];
            int r = queries[i][1];

            if(l == 0){
                res.push_back(prefix[r]);
            }
            else{
                res.push_back(prefix[r] ^ prefix[l-1]);
            }
        }
        return res;
    }
};