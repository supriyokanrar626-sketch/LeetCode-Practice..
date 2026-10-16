class Solution {
public:
    TreeNode* f(vector<int> &postorder,int preLo, int preHi, vector<int> &inorder,int inLo, int inHi){
        
        if(preLo > preHi || inLo > inHi) return NULL ;
        TreeNode* root = new TreeNode(postorder[preHi]) ;
        int i = inLo ;
        while(i <= inHi && inorder[i] != root->val){
            i++ ;
        }
        int ls = i - inLo ;
        root->right = f(postorder,preLo+ls,preHi-1,inorder,i+1,inHi);
        root->left = f(postorder,preLo,preLo+ls-1,inorder,inLo,i-1);
        
        return root ;
    }
    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
        int n = postorder.size() ;
        return f(postorder,0,n-1,inorder,0,n-1);
    }
};