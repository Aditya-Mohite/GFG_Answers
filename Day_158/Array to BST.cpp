class Solution {
  public:
  
    Node* fun(vector<int> &nums, int low, int high) 
    {
        if (low > high)
            return NULL;
            
        int mid = (low + high)/2;
        Node* root = new Node(nums[mid]);
        root->left = fun(nums, low, mid-1);
        root->right = fun(nums, mid+1, high);
        return root;
    }
    Node* sortedArrayToBST(vector<int>& nums) 
    {
         return fun(nums, 0, nums.size()-1);
    }
};
