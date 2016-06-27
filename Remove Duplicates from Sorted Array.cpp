class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n = nums.size();
        int i = 0,j=i+1;
        if(n==0)
            return 0;
        int k = 1;
        while(j<n)
        {
            if(nums[i]!=nums[j])
            {
                nums[++i] = nums[j++];
                k++;
            }
            else
            {
                j++;
            }
        }
        
        return k;
    }
};