class Solution {
public:
    bool isHappy(int n) {
      int sum=0;
      int sum2=11;
     
      if(n<10)  return (n==1 || n==7);
      while(sum2>9){
        sum=0;
      while(n){
        int rem=n%10;
        sum+=rem*rem;
        n/=10;
      }
      sum2=sum;
      n=sum2;
    //  cout<<sum2<<endl;
      } 
    
    return (sum2==1 || sum2==7); 
    }
    
};
