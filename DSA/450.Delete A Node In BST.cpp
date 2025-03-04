class Solution {
public:
    TreeNode* deleteNode(TreeNode* root, int target) {
        if(!root){
            return nullptr;
        }
        if(root->val>target){
            root->left=deleteNode(root->left,target);
            return root;
        }
        else if(root->val<target){
            root->right=deleteNode(root->right,target);
            return root;
        }else{
            if(!root->left&&!root->right){
                delete root;
                return NULL;
            }
            else if(!root->right){
                TreeNode *temp=root->left;
                delete root;
                return temp;
            }
            else if(!root->left){
                TreeNode *temp=root->right;
                delete root;
                return temp;
            }
            else{
                TreeNode *child=root->left;
                TreeNode *parent=root;
                while(child->right){
                    parent=child;
                    child=child->right;
                }
                if(root!=parent){
                    parent->right=child->left;
                    child->left=root->left;
                    child->right=root->right;
                    delete root;
                    return child;
                }
                else{
                    child->right=root->right;
                    delete root;
                    return child;
                }
            }
            
        }
    }
};
