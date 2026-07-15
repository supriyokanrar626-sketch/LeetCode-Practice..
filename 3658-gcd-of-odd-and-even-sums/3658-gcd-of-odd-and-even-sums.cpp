class Solution {
public:
    int gcdOfOddEvenSums(int n) {
        int sumOdd = n * n ; // formula -> first n ta odd number ar sum..sum = n * n ..
        int sumEven = n * (n+1) ;  // same.. 

        return gcd(sumOdd, sumEven) ;
    }
};