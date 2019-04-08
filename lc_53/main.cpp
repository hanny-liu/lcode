#include <iostream>
#include <vector>
#include <iterator>
#include <algorithm>
using namespace std;

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int res = nums[0];
        int sum = 0;
        for (int num : nums) {
            if (sum > 0)
                sum += num;
            else
                sum = num;
            res = Math.max(res, sum);
        }
        return res;
    }
};




int main() {
    vector<int> nums={1,-2,1};
    Solution a;
    cout<<a.maxSubArray(nums);
    //cout<<a.s(nums.begin(),nums.end()-1);
    return 0;
}