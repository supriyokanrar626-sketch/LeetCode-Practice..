class Solution {
public:
    int f(string k){
        int month = stoi(k.substr(0,2));
        int day = stoi(k.substr(3,2)) ;

        vector<int> days = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31} ;
        int total = day ;
        for(int i=0;i<month-1;i++){
            total = total + days[i] ;
        }
        return total ; // 08-15 = 227 din eta calculate hobe...
    }
    int countDaysTogether(string arriveAlice, string leaveAlice, string arriveBob, string leaveBob) {
        
        string st = max(arriveAlice, arriveBob) ;
        string end = min(leaveAlice, leaveBob) ;
        if(st > end) return 0 ; // end date er por st hole...

        return f(end)-f(st)+1 ;
    }
};