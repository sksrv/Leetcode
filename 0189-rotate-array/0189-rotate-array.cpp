class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        
       vector<int> temp(nums.size());
        for(int i=0;i<nums.size();i++){
            temp[(i+k)%nums.size()] = nums[i];
        }
        nums=temp;
      
   /*     vector<int>temp(k);
        for(int i=0;i<k;i++){
           // temp.push_back(nums[i]); //storing first k elements in temp array
           temp[i]=nums[i];
        }
        for(int i=0;i<nums.size()-k;i++){
            nums[i]=nums[(i+k)];
        }
        int j=0;
        for(int i=nums.size()-k;i<nums.size();i++){
            nums[i]=temp[j];
            j++;
        }
*/
/*
        reverse(nums.begin(),nums.begin()+k-1);
        reverse(nums.begin()+k,nums.end());
        reverse(nums.begin(),nums.end());
        */
    }
};