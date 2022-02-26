class Solution {
public:
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector <vector<int>> ans;
        if(root == NULL)
            return ans;
        queue <TreeNode*> q;
        q.push(root);
        bool ltr = true;
        while(!q.empty()){
            int size = q.size();
            vector <int> v(size);
            for(int i=0;i<size;i++){
                TreeNode* temp = q.front();
                q.pop();
                int ind = ltr ? i : size - 1 -i;
                v[ind] = temp->val;
                if(temp->left!=NULL)
                    q.push(temp->left);
                if(temp->right!=NULL)
                    q.push(temp->right);
            }
            ltr = !ltr;
            ans.push_back(v);
        }
        return ans;
    }
};
