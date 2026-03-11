class Solution {
public:
    int bitwiseComplement(int n) {

        if(n == 0) return 1;

        string binary = "";

        while(n > 0){
            char rem = (n % 2) + '0';
            binary += rem;
            n /= 2;
        }

        reverse(binary.begin(), binary.end());

        for(int i = 0; i < binary.size(); i++){
            if(binary[i] == '0')
                binary[i] = '1';
            else
                binary[i] = '0';
        }

        int res = 1;
        int ans = 0;

        for(int i = binary.size() - 1; i >= 0; i--){
            ans += (binary[i] - '0') * res;
            res *= 2;
        }

        return ans;
    }
};