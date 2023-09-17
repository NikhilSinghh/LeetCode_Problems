class Solution {
public:
    int titleToNumber(string columnTitle) {

      int sum=0;
      for(int i=0; i<columnTitle.size(); i++){
        int x=columnTitle[i];
        sum=sum*26+(x-64);

      }
  return sum;        
    }
};

