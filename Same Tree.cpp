class Solution {
public:
    bool isSameTree(TreeNode* p, TreeNode* q) {
        if(p==0)
            return q==0;
        if(q==0)
            return p==0;
        return p->val==q->val&&isSameTree(p->left,q->left)&&isSameTree(p->right,q->right);
    }
};