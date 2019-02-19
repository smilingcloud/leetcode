#ifndef SOLUTION_H
#define SOLUTION_H

#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
#include <unordered_map>
using namespace std;

class Solution
{
public:
    Solution();

    int binSearch(const std::vector<int>& vec, const int &des, int &des_ID);
    vector<int> twoSum(vector<int>& nums, int target);
};

#endif // SOLUTION_H
