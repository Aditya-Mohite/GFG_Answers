
class Solution{
    public:
    /*You are required to complete this method */
    // Return the size of the largest sub-tree which is also a BST
    
    void isbst(Node* root, int& mini, int& maxi, int& maxSize, int& currSize, bool& isBST) 
    {
        if(root == NULL) 
        {
            isBST = true;
            mini = INT_MAX;
            maxi = INT_MIN;
            currSize = 0;
            return;
        }
    
        int leftMin, leftMax, rightMin, rightMax;
        int leftSize, rightSize;
        bool isLeftBST, isRightBST;
    
        isbst(root->left, leftMin, leftMax, maxSize, leftSize, isLeftBST);
        isbst(root->right, rightMin, rightMax, maxSize, rightSize, isRightBST);
    
        if(isLeftBST && isRightBST && leftMax < root->data && root->data < rightMin) 
        {
            mini = min(leftMin, root->data);
            maxi = max(rightMax, root->data);
            currSize = leftSize + rightSize + 1;
            isBST = true;
            maxSize = max(maxSize, currSize);
        } 
        else 
        {
            isBST = false;
            currSize = 0;
        }
    }
    
    
    int largestBst(Node *root)
    {
    	if(root == NULL)
    	{
    	    return 0;
    	}
    
        int mini, maxi, maxSize = 0, currSize;
        bool isBST;
        isbst(root, mini, maxi, maxSize, currSize, isBST);
        return maxSize;
    	
    }
};
