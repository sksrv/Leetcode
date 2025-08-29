class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
        int i = 0;
        while(i<names.size()){
            int tall = heights[i];
            int idx = i;
            for(int j = i+1;j<names.size();j++){
                    if(heights[j] > tall){
                        tall = heights[j];
                        idx = j;
                    }
            }
            swap(names[idx],names[i]);
            swap(heights[idx],heights[i]);
            i++;
        }
        return names;
    }
};