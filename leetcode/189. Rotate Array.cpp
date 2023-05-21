class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int len = nums.size();
        vector<int> temp = nums;
        int i=0;
        k=k%len;
        for(int j=k;j<len;j++) {
            nums[j]=temp[i];
            i++;
        }
        i=0;
        for(int j=len-k;j<len;j++) {
            nums[i]=temp[j];
            i++;
        }
    }
};