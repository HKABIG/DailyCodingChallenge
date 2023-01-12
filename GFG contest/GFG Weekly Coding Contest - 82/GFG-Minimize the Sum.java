class Solution {
    long minimizeSum(int N, int arr[]) {
        // code here
        if(arr.length==1) return 0;
        PriorityQueue<Integer> pq = new PriorityQueue<Integer>();
        int sum = 0;
        int i = 0;
        while(i<N){
            pq.add(arr[i]);
            i++;
        }
        while(pq.size()>=2){
            int a = pq.poll();
            int b = pq.poll();
            sum = sum+a+b;
            
            pq.add(a+b);
        }
        return sum;
    }
}