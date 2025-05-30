class Solution {
public:
    int arraySign(vector<int>& nums) {
      sort(nums.begin(),nums.end());
     
      int count=0;
      for(int i:nums){
        if(i<0){
            count++;
        }
        else if(i==0){
            return 0;
        }
        else{
            break;
        }
      }
      if(count%2==0){
        return 1;
      }
      else{
        return -1;
      }
    }
};