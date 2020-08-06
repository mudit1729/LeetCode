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
    ListNode* swapPairs(ListNode* head) {
        if(head == NULL|| head->next == NULL) return head;
        ListNode *top = head->next;
        ListNode *prevPtr = NULL;
        while(head!=NULL){
            ListNode* curPtr = head;
            ListNode* nxtPtr = head->next;
            ListNode* nxtnxtPtr;
            if(nxtPtr) nxtnxtPtr = head->next->next;
            else return top;
            if(prevPtr) prevPtr->next = nxtPtr;
            nxtPtr->next = head;
            head->next = nxtnxtPtr;
            prevPtr = head;
            head = nxtnxtPtr;
        }
        return top;
    }
};


// Technique 2

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
    ListNode* swapPairs(ListNode* head) {
        if(head == NULL || head->next == NULL) return head;
        ListNode** adrssCurPtr = &head;
        ListNode* nextPtr = head->next;
        ListNode* nextnextPtr = head->next->next;
        adrssCurPtr = &nextPtr;
        nextPtr->next = head;
        head->next = swapPairs(nextnextPtr);
        return nextPtr;
    }
};