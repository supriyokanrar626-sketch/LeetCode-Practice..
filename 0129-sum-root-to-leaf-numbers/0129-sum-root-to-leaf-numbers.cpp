class Solution {
public:
    int f(TreeNode* root, int ans){
        if(root == NULL) return 0;

        ans = 10*ans + root->val ;
        if(root->left == NULL && root->right == NULL){
            return ans ;
        }
        return f(root->left,ans)+f(root->right,ans) ;
    }
    int sumNumbers(TreeNode* root) {
        int ans = 0 ;
        return f(root, ans) ; 
    }
};