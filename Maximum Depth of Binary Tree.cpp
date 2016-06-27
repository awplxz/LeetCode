class Solution {
public:
    int maxDepth(TreeNode* root) {
        if(root == NULL)
        return 0;

        int res = 0;
        queue<TreeNode *> q;
        q.push(root);
        while(!q.empty())
        {
            ++ res;
            for(int i = 0, n = q.size(); i < n; ++ i)
            {
                TreeNode *p = q.front();
                q.pop();

                if(p -> left != NULL)
                    q.push(p -> left);
                if(p -> right != NULL)
                    q.push(p -> right);
            }
        }

        return res;
    }
};
//第二种解法
class Solution {
public:
    int maxDepth(TreeNode* root) {
        if(root == NULL)
            return 0;
        TreeNode* index = root;
        int i = 1;
        if(index->left != NULL&&index->right != NULL){
            i = max(maxDepth(index->left),maxDepth(index->right)) + 1;
        }
        else if(index->left == NULL)
            i = maxDepth(index->right) + 1;
        else if(index->right == NULL)
            i = maxDepth(index->left) + 1;
        return i;
    }
};