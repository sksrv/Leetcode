class Solution {
public:
    int maxArea(vector<int>& height) {
        int n = height.size();
        int i = 0;
        int j = n-1;
        int ans = INT_MIN;

        while(i < j){
            int left = height[i];
            int right = height[j];
            int breadth = min(left,right);
            int length = j-i;
            int area = length * breadth;
            ans = max(ans,area);
            if (height[i] < height[j]) i++;
            else j--;
        }
        return ans;
    }
};