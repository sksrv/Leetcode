class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int row = matrix.size();
        int col = matrix.empty() ? 0 : matrix[0].size();

        int r = 0;

        for(int i = 0;i<matrix.size();i++){
            int a = matrix[i][0];
            int b = matrix[i][col-1];
            if((a <= target) && (target <= b)){
                r = i;
                break;
            }
        }

        int low = 0;
        int high = col-1;

        while(low <= high){
            int mid = low + (high-low)/2;

            if(matrix[r][mid] == target) return true;

            else if(matrix[r][mid] < target){
                low = mid+1;
            }
            else{
                high = mid-1;
            }
        }

        return false;
    }
};