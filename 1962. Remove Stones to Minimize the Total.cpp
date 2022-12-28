class Solution {
public:
    int minStoneSum(vector<int>& piles, int k) {
        priority_queue<int> heap(piles.begin(),piles.end());
        int total_sum = accumulate(piles.begin(),piles.end(),0);
        for(int i=0;i<k;i++){
            int curr = heap.top();
            heap.pop();
            int remove = curr/2;
            total_sum -= remove;
            heap.push(curr-remove);
        }
        return total_sum;
    }
};