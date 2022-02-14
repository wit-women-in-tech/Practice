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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
         vector<vector<int>>ans;
        vector<int>v;
        queue<TreeNode*>q;
        q.push(root);
        q.push(NULL);
         int x=-1;
        while(!q.empty() && q.front())
        {
        
                if(q.front()->left)q.push(q.front()->left);
                if(q.front()->right)q.push(q.front()->right);
            
          v.push_back(q.front()->val);
            q.pop();
            if(!q.front())
            {
                int n=v.size();
                if(x==1)
                {
                for(int i=0;i<n/2;i++)
                {
                    int temp=v[i];
                    v[i]=v[n-1-i];
                    v[n-1-i]=temp;
                }
                    x=-1;
                }
                else x=1;
                ans.push_back(v);
                v.clear();
                q.push(NULL);
                q.pop();
            }
        }
        return ans;
    }
};