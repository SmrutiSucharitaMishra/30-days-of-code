class Solution {
public:
    void zig(bool dir,int &max_len,TreeNode* node,int length){
        if(node == NULL){
            return;
        }
        max_len = max(length,max_len);
        zig(0,max_len,node->left,dir?length+1:1); 
        zig(1,max_len,node->right,dir?1:length+1);  
    }
    int longestZigZag(TreeNode* root) {
        int max_len=0;
        zig(0,max_len,root,0);  
        zig(1,max_len,root,0);  
        return max_len;        
    }
};