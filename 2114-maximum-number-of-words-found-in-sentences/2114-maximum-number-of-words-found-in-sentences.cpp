class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int maxCount = -1;
        for(int i = 0;i<sentences.size();i++){
            string sen = sentences[i];
            int count = 0;
            string word;
            stringstream s(sen);
            while(s >> word){
                count++;
            }
            maxCount = max(maxCount, count);
        }
        return maxCount;
    }
};