class Solution {
public:
    vector<vector<int>> ret;

    void buildVector(TreeNode *root, int depth){
        if(root == NULL) return;
        if(ret.size() == depth)
            ret.push_back(vector<int>());

        ret[depth].push_back(root->val);
        buildVector(root->left, depth + 1);
        buildVector(root->right, depth + 1);
    }

    vector<vector<int> > levelOrder(TreeNode *root) {
        buildVector(root, 0);
        return ret;
    }
};
//第二种解法
class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> res;
        if(root == NULL)
            return res;
        queue<TreeNode*> q;
        q.push(root);
        while(!q.empty()){
            vector<int> index;
            int size = q.size();
            for(int i =0;i<size;i++){
                TreeNode* med = q.front();
                q.pop();
                index.push_back(med->val);      
                if(med->left != NULL)
                    q.push(med->left);
                if(med->right != NULL)
                    q.push(med->right);  
            }
            res.push_back(index);  
        }
        return res;
    }
};