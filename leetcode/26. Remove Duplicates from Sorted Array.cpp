class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        vector<int> ans;
        ans.push_back(nums[0]);
        int count=1;
        for(int i=1;i<nums.size();i++) {
            if(nums[i-1]!=nums[i]) {
                nums[count]=nums[i];
                count+=1;
            }
        }
        return count;
    }
};