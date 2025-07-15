class Solution {
public:
    bool isValid(string word) {
        if(word.length()<3)  return false;
        bool vowel=false;
        bool consonant=false;
        for(char ch:word){
            if(!isalnum(ch)){
                return false;
            }
            if(isalpha(ch)){
                char lower = tolower(ch);
            if(lower=='a' || lower=='e' || lower=='i' || lower=='o' || lower=='u'){
                vowel=true;
            }
            else{
                consonant=true;
            }
            }
        }
       return vowel && consonant;
    }
};