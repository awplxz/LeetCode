class Solution {
public:
    vector<vector<int>> res;
    void DFS(TreeNode* root,int level){
        if(root == NULL)
            return;
        if(level == res.size())
            res.push_back(vector<int> ());
        res[level].push_back(root->val);
        if(root->left!=NULL)
            DFS(root->left,level+1);
        if(root->right!=NULL)
            DFS(root->right,level+1);
    }
    vector<vector<int>> levelOrderBottom(TreeNode* root) {
        DFS(root,0);
        reverse(res.begin(),res.end());
        return res;
    }
};