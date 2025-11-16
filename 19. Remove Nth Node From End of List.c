/* Given the head of a linked list, remove the nth node from the end of the list and return its head.

 

Example 1:


Input: head = [1,2,3,4,5], n = 2
Output: [1,2,3,5]
Example 2:

Input: head = [1], n = 1
Output: []
Example 3:

Input: head = [1,2], n = 1
Output: [1]
 

Constraints:

The number of nodes in the list is sz.
1 <= sz <= 30
0 <= Node.val <= 100
1 <= n <= sz
 

Follow up: Could you do this in one pass?   */






/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if(head == nullptr){
            return nullptr;
        }
        ListNode* temp = head;
        int size = 1;
        while(temp->next != nullptr){
            size += 1;
            temp = temp->next;
        }
        if(size==1){
            return nullptr;
        }
       temp = head;
        if(n==size){
            head = head->next;
            temp->next=nullptr;
            delete temp;
            return head;
        }
        for (int i = 0; i < size - n - 1; i++) {
            temp = temp->next;
        }
        ListNode* toDelete = temp->next;
        temp->next = temp->next->next;
        delete toDelete; 
        return head;

    }
};