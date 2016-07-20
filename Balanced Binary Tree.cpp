class Solution {
public:
    bool isBalanced(TreeNode* root) {
        if(root == NULL)
            return true;
        TreeNode* index = root;
        while(index!=NULL)
        {
            if(abs(Depth(index->right)-Depth(index->left))>1)
                return false;
            return(isBalanced(index->left)&&isBalanced(index->right));
        }
        return true;
        
    }
    int Depth(TreeNode* root){
        if(root == NULL)
            return 0;
        return max(Depth(root->left),Depth(root->right))+1;
    }
};