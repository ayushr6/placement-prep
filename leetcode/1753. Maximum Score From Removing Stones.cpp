class Solution {
public:
    bool check(vector<int>& nums) {
        int count=0;
        int i=1;
        
        for(i;i<nums.size();i++) {
            if((nums[i-1]<=nums[i])==false) {
                count+=1;
            } 
            if (count==2) break;
        }
        cout<<i;
        if(i!=nums.size()) return false;
        if(count!=0 && nums[0]<nums[nums.size()-1]) return false;
        return true;
    }
};