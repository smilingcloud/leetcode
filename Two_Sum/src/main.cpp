#include <iostream>
#include "../include/solution.h"

using namespace std;

int main()
{
    vector<int> nums = {-3, 4, 3, 90， 91};
    int target = 0;

    Solution sol;
    vector<int> res = sol.twoSum(nums, target);
    cout<<"res:[";
    for(int i=0;i<res.size();i++)
    {
        cout<<res[i]<<" ";
    }
    cout<<"]";

    return 0;
}
