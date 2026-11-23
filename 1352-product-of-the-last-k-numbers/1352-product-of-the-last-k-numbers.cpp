class ProductOfNumbers {
public:
    vector<int> arr; int zeo ;
    ProductOfNumbers() {
        arr.push_back(1);
        zeo = -1 ;
    }
    
    void add(int num) {
        int n = arr.size(); int pro = arr.back();
        if(num == 0){
            arr.clear();
            arr.push_back(1);
        } else {
            arr.push_back((pro*num));
        }
    }
    
    int getProduct(int k) {
        int n =arr.size();
        int end = n-1;
        int st = n-k-1;
        if(st < 0) return 0;
        int ans = arr[end] / arr[st] ;
        return ans ;
    }
};

/**
 * Your ProductOfNumbers object will be instantiated and called as such:
 * ProductOfNumbers* obj = new ProductOfNumbers();
 * obj->add(num);
 * int param_2 = obj->getProduct(k);
 */