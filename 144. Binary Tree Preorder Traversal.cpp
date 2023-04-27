/* Initialize an empty array answer.
Start with the root node root. If root is not NULL:
add its value to answer.
repeat step 2 with root's left child
repeat step 2 with root's right child.
Return answer after the iteration stops.

*/

class Solution {
public:
    vector<int>ans;
    
    void dfs(TreeNode* node){
        if(node == nullptr)
            return;
        
        ans.push_back(node->val);
        dfs(node->left);
        dfs(node->right);
    }
    vector<int> preorderTraversal(TreeNode* root) {
        dfs(root);
        return ans;
    }
};
