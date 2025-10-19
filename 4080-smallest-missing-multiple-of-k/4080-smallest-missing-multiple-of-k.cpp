class Solution {
public:

bool binarySearch(vector<int> &arr, int x) {
    
    int low = 0;
    int high = arr.size() - 1;
    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (arr[mid] == x)
            return true;

        if (arr[mid] < x)
            low = mid + 1;

        else
            high = mid - 1;
    }

    return false;
}
    int missingMultiple(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        int i=k;
        while(i<1000000){

            if((binarySearch(nums,i)) == false){
                return i;
            }
            i+=k;
            
        }
        return -1;
    }
};