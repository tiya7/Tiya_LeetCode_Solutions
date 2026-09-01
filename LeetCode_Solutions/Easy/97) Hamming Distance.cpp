class Solution {
public:
    int hammingDistance(int x, int y) {
        
    }
};
class Solution {
public:
    int hammingDistance(int x, int y) {
        int n = x ^ y;
        int count = 0;

        while (n > 0) {
            count += n % 2;
            n = n / 2;
        }

        return count;
    }
};