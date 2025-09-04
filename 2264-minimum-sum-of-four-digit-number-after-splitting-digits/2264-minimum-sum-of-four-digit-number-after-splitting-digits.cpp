class Solution {
public:
    int minimumSum(int num) {
        int ones = num%10;
        num /=10;
        int tens = num%10;
        num /=10;
        int hun  =  num%10;
        num /=10;
        int thou = num%10;
        
        if (ones > tens) swap(ones, tens);
        if (ones > hun) swap(ones, hun);
        if (ones > thou) swap(ones, thou);
        if (tens > hun) swap(tens, hun);
        if (tens > thou) swap(tens, thou);
        if (hun > thou) swap(hun, thou);

        int new1 = ones*10 + thou;
        int new2 = tens*10 + hun;

        return new1+new2;
   
    }
};