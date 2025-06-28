class Solution {
public:

    bool isFreqSame(int freq1[],int freq2[]){
        for(int i=0;i<26;i++){
            if(freq1[i]!=freq2[i]){
                return false;
            }
        }
        return true;
    }

    bool checkInclusion(string s1, string s2) {
        int freq[26]={0};

        for(int i=0;i<s1.size();i++){
            freq[s1[i]-'a']++;
        }
        int wndSize=s1.size();
        for(int i=0;i<s2.length();i++){
            int wndIdx=0 , idx=i;
            int wndFreq[26]={0};
            while(wndIdx<wndSize && idx<s2.size()){
                    wndFreq[s2[idx]-'a']++;
                    wndIdx++;  idx++;
            }

            if(isFreqSame(freq,wndFreq)){
                return true;
            }
        }
        return false;
    }
};