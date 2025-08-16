/* Given a head singly linked list of positive integers. You have to check if the given linked list is palindrome or not.

Examples:

Input: head: 1 -> 2 -> 1 -> 1 -> 2 -> 1
Output: true
Explanation: The given linked list is 1 -> 2 -> 1 -> 1 -> 2 -> 1 , which is a palindrome and Hence, the output is true.

Input: head: 1 -> 2 -> 3 -> 4
Output: false
Explanation: The given linked list is 1 -> 2 -> 3 -> 4, which is not a palindrome and Hence, the output is false.

Constraints:
1 ≤ number of nodes ≤ 105
1 ≤ node->data ≤ 103

  */







  /*
struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};
*/

class Solution {
  public:
    bool isPalindrome(Node *head) {
        //  code here
        Node *s = head;
        Node *f = head;
        while(f != NULL){
            if(f -> next == NULL || f -> next -> next == NULL){
                break;
            }
            s = s -> next;
            f = f -> next -> next;
        }
        Node * rh = s -> next;
        s -> next = NULL;
        Node * th = NULL;
        while(rh != NULL){
            Node *t = rh;
            rh = rh -> next;
            t -> next = th;
            th = t;
        }
        
        Node * h = head;
        while( h != NULL && th != NULL){
            if(h -> data == th -> data){
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