class Solution {
public:
    int pivotIndex(vector<int>& nums) {

        int sum1=0, sum2=0;
        for(int i=0; i<nums.size(); i++){
            sum2=0;
            if(i+1<nums.size())
            for(int j=i+1; j<nums.size(); j++){
                sum2+=nums[j];
            }
            cout<<sum1<<" "<<sum2<<endl;
            if(sum1==sum2){
                return i;
            }
            
             sum1+=nums[i];
        }
        return -1;
    }
};
