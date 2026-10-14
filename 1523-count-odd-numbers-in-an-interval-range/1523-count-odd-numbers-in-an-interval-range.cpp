class Solution {
public:
    int countOdds(int low, int high) {
        int count1=0;
        for( int i=low;i<=high;i++){
            if(i%2!=0){
                count1++;
            }
        }
        return count1;
    }
};