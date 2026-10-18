class Solution {
public:
    int sumOfMultiples(int n) {
        int sums=0;
        for(int i=0;i<=n;i++){
            if(i%3==0||i%5==0||i%7==0){
            sums=sums+i;
            }
        }
        return sums;
    }
    
};