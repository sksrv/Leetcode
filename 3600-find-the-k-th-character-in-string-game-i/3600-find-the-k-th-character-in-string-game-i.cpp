class Solution {
public:
    char kthCharacter(int k) {
        string ans="a";
        while(ans.length()<k){
            string nextPart="";
            for(int i=0;i<ans.length();i++){
                char ch;
                if(ans[i]=='z'){
                    ch='a';
                }
                else{
                    ch=ans[i]+1;
                }
                nextPart+=ch;
            }
            ans +=nextPart;

        }
        return ans[k-1];
    }
};