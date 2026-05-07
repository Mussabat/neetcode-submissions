class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        priority_queue<int, vector<int>>pq(stones.begin(), stones.end());
        while(pq.size() > 1) {
            int big = pq.top();
            pq.pop();
            int small = pq.top();
            pq.pop();
            int now = big - small;
            pq.push(now);
        }
        return pq.top();
    }
};
