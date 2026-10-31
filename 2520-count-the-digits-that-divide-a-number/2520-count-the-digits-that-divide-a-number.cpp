
class Solution {
public:
    int countDigits(int num) {
        int temps = num;
        int count = 0;

        while (temps > 0) {
            int digit = temps % 10;

            if (num % digit == 0) {
                count++;
            }

            temps = temps / 10;
        }

        return count;
    }
};
