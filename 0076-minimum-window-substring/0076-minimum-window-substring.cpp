class Solution {
public:
bool isCorrect(vector<int>&sArr,vector<int>&tArr){
    for(int i=0;i<256;i++){
        if(sArr[i]<tArr[i]) return false;
    }
    return true;
}
    string minWindow(string s, string t) {
        vector<int> tArr(256,0);
        vector<int> sArr(256,0);
        int m = s.size();
        int low = 0;
        int res = INT_MAX;
        int start = 0;
        if(m<t.size())  return "";

        for(int i =0;i<t.size();i++){
            tArr[t[i]]++;
        }

        for(int high = 0;high<m;high++){
            sArr[s[high]]++;
            while(isCorrect(sArr,tArr)){
                int len = high-low+1;
                if(res > len){
                    res = len;
                    start = low;
                }
                sArr[s[low]]--;
                low++;
            }
        }
        if(res==INT_MAX) return "";
    return s.substr(start,res);
    }
};