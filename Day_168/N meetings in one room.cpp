
class Solution {
  public:
    // Function to find the maximum number of meetings that can
    // be performed in a meeting room.
    static bool sorting(pair<int, int> &a, pair<int, int> &b)
    {
        return a.second < b.second;
    }
    int maxMeetings(int n, int start[], int end[]) 
    {
        vector<pair<int, int>> v;
        for(int i=0; i<n; i++)
        {
            pair<int, int> p = make_pair(start[i], end[i]);
            v.push_back(p);
        }
        
        sort(v.begin(), v.end(), sorting);
        
        int cnt = 1;
        int ending = v[0].second;
        for(int i=1; i<n; i++)
        {
            if(ending < v[i].first)
            {
                cnt++;
                ending = v[i].second;
            }
        }
        
        return cnt;
    }
};
