class Solution {
  public:
    // Function to find largest subtree sum.
    int maxsum;
    int pathsum(Node* root){
        if(root==NULL){
            return 0;
        }
        int lpathsum = pathsum(root->left);
        int rpathsum = pathsum(root->right);
        maxsum = max(maxsum,lpathsum+rpathsum+root->data);
        return rpathsum+root->data+lpathsum;
    }
    int findLargestSubtreeSum(Node* root)
    {
        //Write your code here
        maxsum = INT_MIN;
        pathsum(root);
        return maxsum;
    }
};
