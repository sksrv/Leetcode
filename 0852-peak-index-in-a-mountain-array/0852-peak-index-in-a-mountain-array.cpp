class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        // 1 2 3 4 15 9 8 7 6
        int low = 1;
        int high = arr.size()-2;

        while(low <= high){
            int mid = low + (high-low)/2;

            if((arr[mid-1] < arr[mid]) && (arr[mid] > arr[mid+1]))  return mid;

            else if((arr[mid-1] <= arr[mid]) && (arr[mid] <= arr[mid+1])) low = mid+1;

            else high = mid-1;
        }

        return -1;
    }
};