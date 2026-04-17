class Solution {
    public:
        int romanToInt(string s) {
                int ans = 0;

                        for (int i = 0; i < s.size(); i++) {
                                    int val = getValue(s[i]);

                                                if (i < s.size() - 1 && val < getValue(s[i + 1])) {
                                                                ans -= val;
                                                                            } else {
                                                                                            ans += val;
                                                                                                        }
                                                                                                                }

                                                                                                                        return ans;
                                                                                                                            }

                                                                                                                                int getValue(char c) {
                                                                                                                                        if (c == 'I') return 1;
                                                                                                                                                if (c == 'V') return 5;
                                                                                                                                                        if (c == 'X') return 10;
                                                                                                                                                                if (c == 'L') return 50;
                                                                                                                                                                        if (c == 'C') return 100;
                                                                                                                                                                                if (c == 'D') return 500;
                                                                                                                                                                                        return 1000;
                                                                                                                                                                                            }
                                                                                                                                                                                            };7
}