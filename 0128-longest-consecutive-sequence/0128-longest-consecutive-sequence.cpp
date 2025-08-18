class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n = nums.size();
        if(n==0) return 0;
        int longest = 1;
        unordered_set<int> st;

        for(int i:nums){
            st.insert(i);
        }

        for(auto it:st){
            if(st.find(it-1) == st.end()){     //true when (it-1) not exist in st  "means not found in st"
                    int count = 1;
                    int x = it+1;
                while(st.find(x) != st.end()){
                    x = x+1;
                    count++;
                }
                longest = max(longest,count);    
            }
        }
        return longest;
    }
};