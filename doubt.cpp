// class Solution {
// public:
//   ListNode* reverseList(ListNode* head) {
//     if (head == NULL) return NULL; 
//     ListNode* prev = NULL;
//     ListNode* curr = head;
//     ListNode* reversedList = NULL;

//     while (curr != NULL) {
//         ListNode* newNode = new ListNode(curr->val);
//         newNode->next = reversedList;
//         reversedList = newNode;

//         curr = curr->next;
//     }

//     return reversedList;
// }

//     bool isPalindrome(ListNode* head) {
//         ListNode* temp=head;
//         ListNode* temp1=head;
//         ListNode* temp3=reverseList(temp);
//         ListNode* temp2=temp3;

//         while(temp1!=NULL && temp2!=NULL){
    
//             if(temp1->val!=temp2->val){
//                 cout<<"not pal";
//                 return false;
//             }
//                 temp1=temp1->next;
//                 temp2=temp2->next;
//         }
//         return true;
//     }
// };