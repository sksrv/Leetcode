class Solution {
public:
    int minAddToMakeValid(string s) {
        stack<char> ch;
        int count = 0;
        for(int i = 0;i<s.size();i++){
            if(s[i] == '('){
                ch.push(s[i]);
            }
            else if((ch.size() > 0) &&(s[i] == ')') && (ch.top() == '(')){
                ch.pop();
            }
            else if(s[i] == ')'){
                count++;
            }
            else{
                //do nothing
            }
        }
        int ans = ch.size() + count;
        return ans;
    }
};