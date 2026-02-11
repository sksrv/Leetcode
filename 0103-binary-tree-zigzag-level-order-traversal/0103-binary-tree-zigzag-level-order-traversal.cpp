/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left),
 * right(right) {}
 * };
 */
class Solution {
public:
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>> res;
        if (root == NULL) return res;

        queue<TreeNode*> q;
        q.push(root);
        q.push(NULL);

        bool leftToRight = true;
        vector<int> ans;
        while (!q.empty()) {
            
            TreeNode* temp = q.front();
            q.pop();

            if (temp == NULL) {
                if(leftToRight){
                    res.push_back(ans);   //storing in 2d vector final res
                }
                else{
                    reverse(ans.begin(),ans.end());
                    res.push_back(ans);
                }               
                ans.clear();
                leftToRight = !leftToRight;

                if (!q.empty())     q.push(NULL);
            } else {
                    ans.push_back(temp->val);

                if (temp->left) {
                    q.push(temp->left);
                }
                if (temp->right) {
                    q.push(temp->right);
                }
            }
        }
        return res;
    }
};