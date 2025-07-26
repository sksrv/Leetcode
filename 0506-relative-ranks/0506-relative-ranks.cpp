class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
        int n= score.size();
        vector<string> medal(n); 
       
        vector<pair<int,int>> scoreWithIndex;

        for(int i=0;i<n;i++){
            scoreWithIndex.push_back({score[i],i});
        }

        sort(scoreWithIndex.rbegin(),scoreWithIndex.rend());

        for(int i=0;i<n;i++){
            int index = scoreWithIndex[i].second;

            if(i==0){
                medal[index]="Gold Medal";
            }
            else if(i==1){
                medal[index]="Silver Medal";
            }
            else if(i==2){
                medal[index]="Bronze Medal";
            }
            else{
                medal[index]=to_string(i+1);
            }

        }
        return medal;
    }
};