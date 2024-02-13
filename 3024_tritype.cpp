class Solution {
public:
    string triangleType(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int a = nums[0], b = nums[1], c = nums[2];
        if (a + b <= c) return "none"; 
        if (a == b && b == c) return "equilateral";
        if (
            (a == b && a != c) || 
            (b == c && a != c) ||
            (a == c && b != c)
        ) return "isosceles";
        return "scalene";
    }
};