
 #include<bits/stdc++.h>

class Solution {
   
public:
    unordered_map<int,vector<pair<int,int> >  >mp;
    int mn=0,mx=0;
   void helper(TreeNode* root,int x,int y)
    { 
       if(root==NULL)return;
       mn=min(x,mn);
       mx=max(mx,x);  
       mp[x].push_back({y,root->val});
       helper(root->left,x-1,y+1);
       helper(root->right,x+1,y+1);
        return ;
    }
    vector<vector<int>> verticalTraversal(TreeNode* root) {
        helper(root,0,0);
        
        vector<vector<int>>  ans;
        for(int i=mn;i<=mx;i++)
        {
            vector<pair<int,int>>temp=mp[i];
            sort(temp.begin(),temp.end());
            vector<int>v;
            for(int j=0;j<temp.size();j++)v.push_back(temp[j].second);
            ans.push_back(v);
        }
       
        return ans;
    }
};