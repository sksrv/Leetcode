class Solution {
public:
    int numOfSubarrays(vector<int>& arr, int k, int threshold) {
        int count = 0;
        long long sum = 0;
        int p = 0;
        while(p < k){
            sum += arr[p]; 
            p++;
        }
        long long avg = sum / k ;
        if(avg >= threshold) count++;
        int q = 0;       
        for(int i = k;i<arr.size();i++){           
            sum = sum + arr[i] - arr[q];
            avg = sum / k;
            if(avg >= threshold) count++;
            q++;
        }
        return count;
    }
};