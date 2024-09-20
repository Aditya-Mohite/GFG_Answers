
class Solution {
  public:
    // Returns count buildings that can see sunlight
    int countBuildings(vector<int> &height) 
    {
        int cnt = 0;
        int maxi = INT_MIN;
        for(int i=0; i<height.size(); i++)
        {
            if(height[i] > maxi)
            {
                maxi = height[i];
                cnt++;
            }
        }
        return cnt;
    }
};
