class Solution {
public:
    long long minimumCost(int cost1, int cost2, int costBoth, int need1, int need2) {
        
       long long nim = min(need1, need2) ; long long mn = min(costBoth, cost1 + cost2) ; 

        long long sum = nim*mn ;
        long long rem1 = need1 - nim ;  long long rem2 = need2 - nim ;

        sum += rem1* min(cost1,costBoth) ; 
        sum += rem2*min(cost2,costBoth) ;

        return sum ;
    }
};