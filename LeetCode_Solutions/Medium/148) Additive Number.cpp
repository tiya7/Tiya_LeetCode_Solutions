class Solution {
public:
    bool isAdditiveNumber(string num) {
        int n = num.size();

        for (int i = 1; i <= n / 2; i++) {
            if (num[0] == '0' && i > 1) break;

            for (int j = 1; max(i, j) <= n - i - j; j++) {
                if (num[i] == '0' && j > 1) break;

                string a = num.substr(0, i);
                string b = num.substr(i, j);

                int pos = i + j;

                while (pos < n) {
                    string sum = add(a, b);

                    if (num.substr(pos, sum.size()) != sum)
                        break;

                    pos += sum.size();
                    a = b;
                    b = sum;
                }

                if (pos == n) return true;
            }
        }

        return false;
    }

    string add(string a, string b) {
        string result = "";
        int i = a.size() - 1;
        int j = b.size() - 1;
        int carry = 0;

        while (i >= 0 || j >= 0 || carry) {
            int sum = carry;

            if (i >= 0) sum += a[i--] - '0';
            if (j >= 0) sum += b[j--] - '0';

            result += char('0' + sum % 10);
            carry = sum / 10;
        }

        reverse(result.begin(), result.end());
        return result;
    }
};