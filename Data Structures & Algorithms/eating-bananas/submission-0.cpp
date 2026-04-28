class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
      int l = 1;
      sort(piles.begin(), piles.end());
      int r = piles[piles.size() - 1];
      int k = r;
      int mid;
      while(l <= r) {
        mid = (l + r) / 2;
        int time = 0;
        for(int i = 0; i < piles.size(); i++) {
            time += ceil(piles[i] * 1.0 / mid * 1.0);
        }
        if(time > h) {
            l = mid + 1;
        }
        else if(time <= h){   
            r = mid - 1;
            k = min(k, mid);
        }

      } 
      return k;
    }
};
