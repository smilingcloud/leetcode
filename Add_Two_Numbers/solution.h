#ifndef SOLUTION_H
#define SOLUTION_H
#include <iostream>
#include <stddef.h>
struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

class Solution
{
public:
    Solution();
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2);
    ListNode* reverseLink(ListNode* l);
};

#endif // SOLUTION_H
