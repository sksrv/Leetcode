class Solution {
public:
    vector<int> findKDistantIndices(vector<int>& nums, int key, int k) {
        set<int> idx;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==key){
                int j=i;
                for(int p=0;p<nums.size();p++){
                        if(abs(p-j)<=k){
                           // auto it=find(idx.begin(),idx.end(),p);
                            idx.insert(p);
                        }
                }
            }
        }
       
        return vector<int>(idx.begin(),idx.end());
    }
};