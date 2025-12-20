class Solution {
public:
    int minDeletionSize(vector<string>& strs) {
        int cnt = 0;
        int stringSize = strs[0].size();
        for(int k = 0;k<stringSize;k++){
            int i = 0;
            int j = i+1;    
            while(j<strs.size()){
                string s = strs[i];
                string p = strs[j];
                if(s[k] > p[k]){
                    cnt++;
                    break;
                }
                i++;
                j++;
            }
        }
        return cnt;
    }
};