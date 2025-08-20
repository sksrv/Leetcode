class Solution {
public:
    vector<int> shortestToChar(string s, char c) {
        vector<int> ans;
        vector<int> ch;

        for(int i = 0;i<s.size();i++){
            if(s[i] == c){
                ch.push_back(i);
            }
        }

        for(int i = 0;i<s.size();i++){
            int distance = s.size();
            for(int j = 0;j<ch.size();j++){
                int chD = ch[j];
                int d = abs(i - chD);
                distance = min(distance,d);
            }
            ans.push_back(distance);
        }
        return ans;
    }
};