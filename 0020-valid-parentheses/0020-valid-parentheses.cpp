class Solution {
public:
    bool isValid(string s) {
        stack<int> bracket;

        for(int i = 0;i<s.size();i++){
            char ch = s[i];
            if(ch == '(' || ch == '{' || ch == '['){
                bracket.push(ch);
            }
            else{
                if(!bracket.empty()){
                    char top = bracket.top();
                    if((ch == ')' && top == '(') || (ch == '}' && top == '{') || (ch == ']' && top == '[')){
                            bracket.pop();
                    }
                    else{
                        return false;
                    }
                }
                else{
                    return false;
                }
            }
        }
        return bracket.empty();
    }
};