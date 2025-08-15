class Solution {
public:
    vector<vector<int>> modifiedMatrix(vector<vector<int>>& matrix) {
        int m = matrix.size();
        int n = matrix[0].size();

        vector<vector<int>> ans = matrix; // copy original

        for (int j = 0; j < n; j++) {
            // find max in column j
            int colMax = INT_MIN;
            for (int i = 0; i < m; i++) {
                colMax = max(colMax, matrix[i][j]);
            }
            // replace -1 in column j with colMax
            for (int i = 0; i < m; i++) {
                if (matrix[i][j] == -1) {
                    ans[i][j] = colMax;
                }
            }
        }
        return ans;
    }
};
