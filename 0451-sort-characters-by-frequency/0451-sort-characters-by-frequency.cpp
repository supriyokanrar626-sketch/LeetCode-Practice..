class Solution {
public:
    string frequencySort(string s) {
        
        map<char, int> map ; string k ;
        for(auto x : s){
            map[x]++;
        }
        priority_queue<pair<int,char>> pq ;
        // Max Heap te {freq , char} ...ei order te ache..
        for(auto &n : map){
            pq.push({n.second,n.first}); 
          }

        while(!pq.empty()){

            int freq = pq.top().first ;
            char ch = pq.top().second ;
            k.append(freq, ch);
            pq.pop();
        }
        return k ;
    }
};