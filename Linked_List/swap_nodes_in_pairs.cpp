//! https://leetcode.com/problems/swap-nodes-in-pairs/
struct ListNode
{
    ListNode() : val(0), next(nullptr) {}
    int val;
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode *next;
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution
{
public:
    ListNode *swapPairs(ListNode *head)
    {
        if (!head || !head->next)
            return head;

        ListNode *nextNode = head->next;
        head->next = swapPairs(head->next->next);
        nextNode->next = head;
        return nextNode;
    }
};