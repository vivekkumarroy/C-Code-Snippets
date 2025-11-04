/* Given a linked list with the head node and a key, the task is to check if the key is present in the linked list or not. Return true if key is present, else return false.

Example:

Input: key = 3,
      
Output: true
Explanation: 3 is present in Linked List.

Input: key = 4,
   
Output: false
Explanation: 4 is not present in Linked List.

Constraint:
1 ≤ Number of nodes ≤ 105
1 ≤ node.data, key ≤ 105

   */





   /* Link list node */
/*
struct Node
{
    int data;
    Node* next;
    Node(int x) {  data = x;  next = NULL; }
}; */

class Solution {
  public:
    // Function to count nodes of a linked list.
    bool searchKey(int n, Node* head, int key) {
        // Code here
        Node *th = head;
        for(int i = 0;i < n;i++){
            if((th -> data) == key){
                return true;
            }
            th = th -> next;
            
        }
        return false;
    }
};