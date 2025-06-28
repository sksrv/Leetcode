class Solution {
public:
    string removeOccurrences(string s, string part) {
        while(s.find(part)<s.size()){
            int start=s.find(part);
            int end=part.size();
            s.erase(start,end);
        }
        return s;
    }
};