/*  You are given the head of a Singly linked list. You have to reverse every k node in the linked list and return the head of the modified list.
Note: If the number of nodes is not a multiple of k then the left-out nodes at the end, should be considered as a group and must be reversed.

Examples:

Input: k = 2,
   
Output: 2 -> 1 -> 4 -> 3 -> 6 -> 5
Explanation: Linked List is reversed in a group of size k = 2.
   
Input: k = 4,
   
Output: 4 -> 3 -> 2 -> 1 -> 6 -> 5
Explanation: Linked List is reversed in a group of size k = 4.
   
Constraints:
1 ≤ size of linked list ≤ 105
0 ≤ node->data ≤ 106
1 ≤ k ≤ size of linked list   */






/*
  Node is defined as
    struct node
    {
        int data;
        struct Node* next;

        Node(int x){
            data = x;
            next = NULL;
        }

    }*head;
*/
class Solution {
  public:
    Node* reverseKGroup(Node* head, int k) {
        Node* curr = head;
        int count = 0;
        while (curr != NULL && count < k) {
            curr = curr->next;
            count++;
        }
        Node* prev = NULL;
        Node* n = NULL;
        curr = head;
        int reversed = 0;
        while (curr != NULL && reversed < count) {
            n = curr->next;
            curr->next = prev;
            prev = curr;
            curr = n;
            reversed++;
        }
        if (n != NULL) {
            head->next = reverseKGroup(n, k);
        }
        return prev;
    }


};