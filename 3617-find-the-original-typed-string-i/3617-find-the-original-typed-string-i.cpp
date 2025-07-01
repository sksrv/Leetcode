class Solution {
public:
    int possibleStringCount(string word) {
        int i=0;
        int j=i+1;
        int count=1;
        while(i<word.size()-1){
            if(word[i]==word[j]){
                count++;
            }
            i++;
            j++;
        }
        return count;
    }
};