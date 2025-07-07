class Solution {
public:
    int binarySearch(vector<int>& nums,int s,int e,int target){

        if(s>e)  return -1;

        int mid= s + (e-s)/2;

        if(nums[mid]==target) return mid;

        if(nums[mid]<target)   return binarySearch(nums,mid+1,e,target);

        else{ 
            return binarySearch(nums,s,mid-1,target);
        }
    }
    int search(vector<int>& nums, int target) {
        return binarySearch(nums,0,nums.size()-1,target);
    }
};