#include "solution.h"

Solution::Solution()
{

}

ListNode *Solution::addTwoNumbers(ListNode *l1, ListNode *l2)
{
    ListNode* dummyRoot = new ListNode(0);
    ListNode* ptr = dummyRoot;
    int sum,a,b = 0;

    for(;l1 != NULL && l2 != NULL;l1 = l1->next, l2 = l2->next)
    {
        sum = l1->val + l2->val + b;
        a = sum % 10;
        ptr->next = new ListNode(a);
        ptr = ptr->next;
        b = sum / 10;
    }
    for(;l1 != NULL;l1 = l1->next)
    {
        sum = l1->val + b;
        a = sum % 10;
        ptr->next = new ListNode(a);
        ptr = ptr->next;
        b = sum / 10;
    }
    for(;l2 != NULL;l2 = l2->next)
    {
        sum  = l2->val +b;
        a= sum % 10;
        ptr->next = new ListNode(a);
        ptr = ptr->next;
        b = sum / 10;
    }
    if(b != 0)
    {
        ptr->next = new ListNode(b);
        ptr = ptr->next;
    }


    ptr = dummyRoot->next;
    delete dummyRoot;
    ptr = reverseLink(ptr);
    return ptr;
}

//to reverse single linked list
ListNode *Solution::reverseLink(ListNode *l)
{
    ListNode* prev = NULL;
    ListNode* next;
    while(l != NULL)
    {

        next = l->next;
        l->next = prev;
        prev = l;
        l = next;

    }
    return prev;
}
