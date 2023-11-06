class Solution {
public:
    int countSeniors(vector<string>& d) {
     int count=0;

        for(auto x: d){
    
                        int num=x[10+1]-'0';
                        int num2=x[10+2]-'0';
                        num*=10;
                        num+=num2;
                        if(num>60)
                        count++; 
        }
        return count;
        
    }
};



//   for(auto x: d){
//             for(int i=0; i<x.size(); i++){
//                  if(x[i]=='M' || x[i]=='F')
//                     {
//                         int num=x[i+1]-'0';
//                         int num2=x[i+2]-'0';
//                         num*=10;
//                         num+=num2;
//                         if(num>60)
//                         count++;

//                     }  
            
//         }
//         }
//         return count;
        
