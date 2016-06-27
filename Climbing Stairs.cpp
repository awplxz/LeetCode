class Solution {
public:
    int climbStairs(int n) {
        if( n == 1 || n == 2)
            return n;
        int *sex = new int[n+1];
        sex[0] = 1;
        sex[1] = 1;
        for(int i =2;i<n+1;i++)
        {
            sex[i] = sex[i-1]+sex[i-2];
        }
        return sex[n];
    }
};