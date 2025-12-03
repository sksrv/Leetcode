class Solution {
public:
    int minLength(string s) {
        stack<char> st;
        
        for(char c : s) {
            st.push(c);
            if(st.size() >= 2) {
                char a = st.top(); st.pop();
                char b = st.top(); st.pop();
                
                string pair = "";
                pair += b;
                pair += a;
                
                if(pair != "AB" && pair != "CD") {
                    
                    st.push(b);
                    st.push(a);
                }
            }
        }
        
        return st.size();
    }
};
