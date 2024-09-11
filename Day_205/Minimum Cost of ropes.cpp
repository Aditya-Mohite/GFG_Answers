
class Solution {
  public:
    // Function to return the minimum cost of connecting the ropes.
    long long minCost(vector<long long>& arr) 
    {
        priority_queue<long long,vector<long long>,greater<long long>>pq;
        for(int i=0;i<arr.size();i++)
        {
           pq.push(arr[i]);
        }
        long long res=0;
        while(pq.size()>1)
        {
           long long num1=pq.top();
           pq.pop();
           long long num2=pq.top();
           pq.pop();
           long long sum=num1+num2;
           pq.push(sum);
           res+=sum;
       }
       return res;
    }
};
