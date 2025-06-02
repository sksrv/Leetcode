class Solution {
public:
    int countKeyChanges(string s) {
        int count=0;
        for(int i=1;i<s.size();i++){
            if(s[i]==s[i-1]){
                continue;
            }
            if(s[i]!=((s[i-1]-'A')+'a') && s[i]!= ((s[i-1]-'a')+'A')){
                count++;
            }
        }
        return count;
    }
};