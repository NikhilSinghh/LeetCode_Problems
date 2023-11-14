class Solution {
public:
    int addDigits(int num) {
        int temp=num, sum=0;
        while(temp>9){
            int x=temp;
            sum=0;
            while(x!=0){
                int rem=x%10;
                    sum+=rem;
                    x/=10;
            }
        }
        return sum;
        
    }
};
