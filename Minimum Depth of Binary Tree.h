class Solution {
public:
    int minDepth(TreeNode* root) {
        if(root == NULL)
            return 0;
        queue<TreeNode*> Q;
        Q.push(root);
        int i= 0;
        while(!Q.empty()){
            i++;
            int k = Q.size();
            for(int j = 0;j<k;j++){
                TreeNode* index = Q.front();
                if(index->left)
                    Q.push(index->left);
                if(index->right)
                    Q.push(index->right);
                Q.pop();
                if(!index->right && !index->left)
                    return  i;
            }
        }
        return -1;
    }
};