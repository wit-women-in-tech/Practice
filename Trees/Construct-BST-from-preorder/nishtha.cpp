class Solution {
public:
    TreeNode*helper(vector<int>& pre,int si,int ei)
    {
        if(ei<si)return NULL;
        TreeNode* root=new TreeNode(pre[si]);
        int i=si;
        for( i=si;i<=ei;i++)
        {
            if(pre[i]>pre[si])break;
        }
        root->left=helper(pre,si+1,i-1);
        root->right=helper(pre,i,ei);
        return root;
    }
    TreeNode* bstFromPreorder(vector<int>& pre) {
      return helper(pre,0,pre.size()-1);
    }
};