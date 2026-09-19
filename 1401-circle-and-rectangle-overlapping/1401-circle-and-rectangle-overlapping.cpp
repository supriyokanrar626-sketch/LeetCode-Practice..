class Solution {
public:
    bool checkOverlap(int radius, int xCenter, int yCenter, int x1, int y1, int x2, int y2) {
        long long kim = 0 , kimi = 0;
        if(xCenter < x1 || xCenter > x2){
            kim = min(pow(x1-xCenter,2), pow(x2-xCenter, 2)) ;
        }

        if(yCenter < y1 || yCenter > y2){
            kimi = min(pow(y1-yCenter,2), pow(y2-yCenter, 2)) ;
        }
        return kim + kimi <= radius*radius ; 
    }
};