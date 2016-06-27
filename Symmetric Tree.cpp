class Solution {
public:
    bool isSymmetric(TreeNode* root) {
        if(root == 0)
            return true;
        return panduan(root->left,root->right);
    }
    bool panduan(TreeNode* x,TreeNode* y){
        if(x == 0)
            return y==0;
        if(y == 0)
            return x==0;
        return x->val == y->val && panduan(x->left,y->right) && panduan(x->right,y->left);
    }
};