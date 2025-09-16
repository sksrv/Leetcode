class Solution {
public:
    long long HCF(long long a, long long b) {
        while (b != 0) {
            long long temp = b;
            b = a % b;
            a = temp;
        }
        return a;
    }
    long long LCM(long long a, long long b) {
        return (a / HCF(a, b)) * b;  
    }
    vector<int> replaceNonCoprimes(vector<int>& nums) {
        vector<long long> st;

        for(int num:nums){
            long long curr = num;
            while(!st.empty() && HCF(st.back(),curr) > 1){
                curr = LCM(st.back(), curr);
                st.pop_back();
            }
            st.push_back(curr);
        }

        vector<int> result(st.begin(), st.end());
        return result;
    }
};