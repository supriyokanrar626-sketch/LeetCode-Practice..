class Solution {
public:
    TreeNode* f(vector<int> &preorder,int preLo, int preHi, vector<int> &inorder,int inLo, int inHi){
        
        if(preLo > preHi || inLo > inHi) return NULL ;
        TreeNode* root = new TreeNode(preorder[preLo]) ;
        int i = inLo ;
        while(inLo <= inHi && inorder[i] != root->val){
            i++ ;
        }
        int ls = i - inLo ;
        root->left = f(preorder,preLo+1,preHi+ls,inorder,inLo,i-1);
        root->right = f(preorder,preLo+ls+1,preHi,inorder,i+1,inHi);
        
        return root ;
    }
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        int n = preorder.size() ;
        return f(preorder,0,n-1,inorder,0,n-1);
    }
};