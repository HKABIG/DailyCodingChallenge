class Solution
{
    public:
    int count = 0;
    bool countsingle(Node* root){
        if(root==NULL) return true;
        bool left = countsingle(root->left);
        bool right = countsingle(root->right);
        if(left==false || right==false) return false;
        if(root->left && root->data!=root->left->data) return false;
        if(root->right && root->data!=root->right->data) return false;
        count++;
        return true;
    }
    int singlevalued(Node *root)
    {
        //code here
        countsingle(root);
        return count;
    }
    
};