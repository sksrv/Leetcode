class Solution {
public:
    int maximumSum(vector<int>& arr) {
        int noPower = arr[0];      
        int power = 0;          
        int ans = arr[0];

        for (int i = 1; i < arr.size(); i++) {
            int v1 = arr[i];  //consider it as a first element 
            int v2 = noPower + arr[i]; // noDelete 

            int v3 = power + arr[i];   //oneDelete
            int v4 = noPower; // current element is delete

            noPower = max(v1,v2);
            power = max(v3,v4);

            ans = max(ans,max(noPower,power));
        }

        return ans;
    }
};