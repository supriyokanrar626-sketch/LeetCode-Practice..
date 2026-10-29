class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        
        map<int, int> map ; vector<int> ans ;
        for(auto x : nums){
            map[x]++ ;
        }
        priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>> pq ;

// Min Heap te {freq , number} ...ei order te ache..
        for(auto &n : map){
            pq.push({n.second,n.first});

            if(pq.size() > k){
            pq.pop() ;
          }
        }

        while(!pq.empty()){
            ans.push_back(pq.top().second);
            pq.pop();
        }   
        return ans ;     
    }
};