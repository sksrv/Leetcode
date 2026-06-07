class Solution {
public:
    string removeDuplicates(string s) {
        stack<char> st;
        st.push(s[0]); 
        int i = 1;
        char top;
        while (i < s.size()) {

            if(st.empty()){
                st.push(s[i]);
                i++;
                continue;
            }
            else{
                top = st.top(); 
            }
            if ((!st.empty()) && (top == s[i])) {
                st.pop(); 
            } else {
                st.push(s[i]);  
            }
            i++;
        }

        s = "";

        while (!st.empty()) {
            s += st.top();
            st.pop();
        }
        reverse(s.begin(),s.end());
        return s;
    }
};
