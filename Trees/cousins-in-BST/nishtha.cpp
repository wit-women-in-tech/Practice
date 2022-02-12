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
    
    bool isCousins(TreeNode* root, int x, int y) {
       queue<TreeNode*>q;
        q.push(root);
        q.push(NULL);
        while(!q.empty() && q.front())
        {
            bool a=false,b=false;
            while(q.front())
            {
                if(q.front()->val==x)a=true;
                if(q.front()->val==y)b=true;
                if(q.front()->left && q.front()->right)
                {
                    if(q.front()->left->val==x && q.front()->right->val==y)return false;
                     if(q.front()->left->val==y && q.front()->right->val==x)return false;
                }
                if(q.front()->left)q.push(q.front()->left);
                if(q.front()->right)q.push(q.front()->right);
                q.pop();
            }
            if(a && b)return true;
            q.pop();
            q.push(NULL);
        }
        return false;
    }
};