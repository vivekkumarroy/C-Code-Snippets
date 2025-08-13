/*  Given the head of a singly linked list, return true if it is a palindrome or false otherwise.

 

Example 1:


Input: head = [1,2,2,1]
Output: true
Example 2:


Input: head = [1,2]
Output: false
 

Constraints:

The number of nodes in the list is in the range [1, 105].
0 <= Node.val <= 9
 

Follow up: Could you do it in O(n) time and O(1) space?  */






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
    bool isPalindrome(ListNode* head) {
        ListNode *s = head;
        ListNode *f = head;

        while(f != nullptr )
        {
            if(f -> next == nullptr || f -> next -> next == nullptr){
                break;
            }
            s = s -> next;
            f = f -> next -> next;
        }

        ListNode *rh   = s -> next;

        s -> next = nullptr;
        
        ListNode *th = nullptr;

        while(rh != nullptr)
        {
            ListNode *t = rh;
            rh = rh -> next;
            t -> next = th;
            th = t;
        }
        ListNode * h = head;
        while(h != nullptr && th != nullptr){
            if(h -> val == th -> val){
                h = h -> next;
                th = th -> next;
            }
            else{
                return false;
            }
        }
          
         return true;
    } 
};