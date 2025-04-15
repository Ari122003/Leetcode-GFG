#include <bits/stdc++.h>
using namespace std;

class ListNode
{
public:
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};
ListNode *reverseList(ListNode *head)
{

    if (head == nullptr || head->next == nullptr)
    {
        return head;
    }

    ListNode *prev = nullptr;
    ListNode *temp = head;
    ListNode *right = temp->next;

    while (temp != nullptr)
    {
        temp->next = prev;
        prev = temp;
        temp = right;

        if (right != nullptr)
        {
            right = right->next;
        }
    }

    head = prev;

    return head;
}
int main()
{
    return 0;
}