#include <iostream>
#include <map>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int searchInsert(vector<int>& nums, int target)
    {
         auto i=find(nums.begin(),nums.end(),target);
         if(i==nums.end())
         {
             auto j=find_if(nums.begin(),nums.end(),[target](const int &j){return j>target;});
             return (j-nums.begin());
         }
         else
             return i-nums.begin();
    }
};

int main() {
    Solution A;
    vector<int> m={1,2,5,6,8,9,12,15};
    cout<<A.searchInsert(m,5)<<endl;
    cout<<A.searchInsert(m,10)<<endl;
    cout<<A.searchInsert(m,0)<<endl;
    cout<<A.searchInsert(m,16)<<endl;
}
