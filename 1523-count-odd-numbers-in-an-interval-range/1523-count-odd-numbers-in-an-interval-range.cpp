class Solution {
public:
    int countOdds(int low, int high) {
        int counter = 0;
        for (; low <= high; low++) {
            if (low % 2 != 0) {
                counter++;
            }
        }
        return counter;
    }
};