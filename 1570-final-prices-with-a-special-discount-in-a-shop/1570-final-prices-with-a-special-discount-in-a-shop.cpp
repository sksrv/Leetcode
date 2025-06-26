class Solution {
public:
    vector<int> finalPrices(vector<int>& prices) {
        vector<int> answer;
        for(int i=0;i<prices.size();i++){
            for(int j=i+1;j<prices.size();j++){

            if(prices[j]<=prices[i]){
                answer.push_back(prices[i]-prices[j]);
                break;
            }            
            }    
            if(answer.size()<i+1){       
            answer.push_back(prices[i]);
            }
        }
        return answer;
    }
};