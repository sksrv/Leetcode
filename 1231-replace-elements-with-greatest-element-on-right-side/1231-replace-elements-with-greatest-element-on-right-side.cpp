class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
       
        int n = arr.size();
        int great = -1;

        for(int i=n-1;i>=0;i--){
            int curr = arr[i];
            arr[i] = great;
            great = max(great,curr);
            
        }
        return arr;
    }
};