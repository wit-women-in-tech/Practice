/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    vector<double> averageOfLevels(TreeNode* root) {
        queue<TreeNode*>q;
        q.push(root);
        
        q.push(NULL);
        vector<double> ans;
        if(!root)return ans;
        while(!q.empty() && q.front()!=NULL)
        {
            double c=0;
            long long int av=0;
            while(q.front())
            {
                
                av+=q.front()->val;
                if(q.front()->left)q.push(q.front()->left);
                if(q.front()->right)q.push(q.front()->right);
                q.pop();
                c++;
            }
            q.pop();
            q.push(NULL);
            double t=av/c;
           
            ans.push_back(t);
        }
        return ans;
    }
};