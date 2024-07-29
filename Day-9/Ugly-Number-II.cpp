class Solution {
public:
   int nthUglyNumber(int n) {
        //a hash map to see if a certain number was already popped; for ex: 2*3 and 3*2
        //will both add 6 to the pq, but we will only have to count it once.
        unordered_map<long long, int> map;
        priority_queue<long long, vector<long long>, greater<long long>> pq;
        
        pq.push(1);
        int count= 0;
        long long popped;
        
        while(count<n){
            popped= pq.top();
            pq.pop();
            if(map[popped]== 0){
                pq.push(popped*2);
                pq.push(popped*3);
                pq.push(popped*5);
                count++;
                map[popped]= 1;
            }
        }
        return int(popped);
	}
};