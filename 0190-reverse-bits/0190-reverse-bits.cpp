class Solution {
public:
    int reverseBits(int n) {
        int kim = 0 ;
        for(int i=0;i<32;i++){
            kim = kim << 1 ;  // result ke << 1 kore faka jaiga banano..
            kim = kim | (n&1) ;  //  n ar last bit n & 1 ber kore kim e | kora bosano
            n = n >> 1 ;  // n ke n>>1 kore last bit ke fele dwoa .. // ata 32 bar repeat kora...
        }
        return kim ;
    }
};