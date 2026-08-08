class Solution
{
public:
    ListNode *mergeTwoLists(ListNode *list1, ListNode *list2)
    {
        ListNode *head = new ListNode();
        ListNode *tail = head;

        while (!(list1 == nullptr && list2 == nullptr))
        {

            if (list1 == nullptr && list2 != nullptr)
            {
                tail->next = list2;
                break;
            }
            else if (list2 == nullptr && list1 != nullptr)
            {
                tail->next = list1;
                break;
            }

            if (list1->val < list2->val)
            {
                tail->next = new ListNode(list1->val);
                list1 = list1->next;
            }
            else
            {
                tail->next = new ListNode(list2->val);
                list2 = list2->next;
            }

            tail = tail->next;
        }
        head = head -> next;
        return head;
    }
};