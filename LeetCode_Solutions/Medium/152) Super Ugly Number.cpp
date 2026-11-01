
class Solution {
public:
    int nthSuperUglyNumber(int n, vector<int>& primes) {
        vector<long long> ugly(n, 1);
        int m = primes.size();

        vector<int> idx(m, 0);
        vector<long long> val(m);

        for(int i = 0; i < m; i++)
            val[i] = primes[i];

        for(int i = 1; i < n; i++) {
            long long mn = *min_element(val.begin(), val.end());
            ugly[i] = mn;

            for(int j = 0; j < m; j++) {
                if(val[j] == mn) {
                    idx[j]++;
                    val[j] = ugly[idx[j]] * primes[j];
                }
            }
        }

        return ugly[n - 1];
    }
};
