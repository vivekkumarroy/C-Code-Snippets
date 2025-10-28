/*   Given a linked list, return an integer denoting the length of the longest palindrome list that exists in the given linked list.

Examples:

Input: Linked List: 2->3->7->3->2->12->24
Output: 5
Explanation: 2 -> 3 -> 7 -> 3 -> 2 is the linked list whose nodes leads to a palindrome.
Input: Linked List: 12->4->4->3->14

Output: 2
Explanation: 4 -> 4 is the linked list whose nodes leads to a palindrome with length 2.
Expected Time Complexity: O(n2)
Expected Space Complexity: O(1)

Constraints:
1 <= number of nodes <= 104
1 <= data of nodes <= 105

   */






   /* The Node is defined
  /* Link list Node
struct Node
{
    int data;
    struct Node* next;

    Node(int x){
        data = x;
        next = NULL;
    }

};
*/
class Solution {
  public:
    /*The function below returns an int denoting
    the length of the longest palindrome list. */
    
    int countCommon(Node* a, Node* b) {
    int count = 0;
    while(a && b) {
        if (a->data == b->data) {
            count++;
            a = a->next;
            b = b->next;
        } 
        else {
            break;
        }
    }
    return count;
}

int maxPalindrome(Node* head) {
    Node* prev = nullptr;
    Node* curr = head;
    int result = 0;

    while (curr) {
        Node* next = curr->next;
        curr->next = prev;
        int oddLen = 2*countCommon(prev, next) + 1;
        int evenLen = 2*countCommon(curr, next);
        result = max(result, max(oddLen, evenLen));
        // cout << result << " ";
        prev = curr;
        curr = next;
    }
    return result;
}

};