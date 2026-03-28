class Solution {
public:
    string sortSentence(string s) {
        string word;
        stringstream ss(s); 
        int count = distance(istream_iterator<string>(ss), istream_iterator<string>());
        
        vector<string> arr(count+2);

        stringstream pp(s);
        string res = "";

        while(pp >> word){
            int n = word.size();
            int pos = word[n-1] - '0';
            arr[pos+1] = word.substr(0,n-1);
        }
        for(int i = 1;i<arr.size();i++){
            res += " " + arr[i];
        }
        return res.substr(2);
    }
};