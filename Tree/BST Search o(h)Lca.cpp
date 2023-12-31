// Searching : Tc:o(h) worst o(n)   SC: o(1) no auxiliary space since it is not recursive code.
// We dont traverse whole tree unlike in lca of binary tree. LCA in BST will be the element where both p & q separates into 2 different sub tree. So we search for that element.

TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        while(root){
            if(root->val < p->val && root->val < q->val)      // Both p & q greater than root
                root=root->right;
            else if(root->val >p->val && root->val >q->val)   // Both lesser than root
                root=root->left;
            else 
                break;                //🟩Never return inside loop put break when ans found otherwise lots of error
        }
        return root;
}
