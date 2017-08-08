class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        long int f =1, p=1;
        long int l = nums.size();
        f *= nums[l-1]*nums[l-2]*nums[l-3];
        p *= nums[0]*nums[1]*nums[l-1];
        return max(p,f);
    }
};
