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
    // int getNum(ListNode* l1) {
    //     int order = 0;
    //     long long int num = 0;
    //     while(l1!=nullptr) {
    //         num = num + (l1->val) * (int)pow(10, order);
    //         l1 = l1->next;
    //         order++;
    //     }
    //     return num;
    // }
    
    // int getOrder(int sum) {
    //     int order = 0;
    //     while(sum!=0){
    //         order++;
    //         sum = sum/10;
    //     }
    // }
    
    // ListNode* numToList(int sum) {
    //     struct ListNode *prev = nullptr;
    //     struct ListNode *startPtr = nullptr;
    //     if(sum==0) return new ListNode(0);
    //     while(sum!=0) {
    //         struct ListNode *result = new ListNode(sum%10);
    //         if (prev!= nullptr) prev->next = result;
    //         else startPtr = result;
    //         prev = result;
    //         sum = sum/10;
    //     }
    //     return startPtr;
    // }
    
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        // int n_l1 = getNum(l1);
        // int n_l2 = getNum(l2);
        // //cout << n_l1 << " " << n_l2 << endl;
        // int sum = n_l1 + n_l2;
        // return numToList(sum);
// Solution 1 
        int carry = 0;
        int l1_val;
        int l2_val;
        int sum = 0;
        struct ListNode *startPtr = nullptr;
        struct ListNode *prevPtr = nullptr;
        while(l1 != nullptr || l2 != nullptr || carry != 0) {
            l1_val = (l1 == nullptr) ?  0 : l1->val;
            l2_val = (l2 == nullptr) ?  0 : l2->val;
            sum = l1_val + l2_val + carry;
            carry = (sum >= 10) ? sum/10 : 0;
            sum = (sum >= 10) ? sum-10 : sum;
            struct ListNode *result = new ListNode(sum);
            if(prevPtr!=nullptr) {
                prevPtr->next = result;
            } else {
                startPtr = result;
            }
            prevPtr = result;
            if (l1!=nullptr) l1 = l1->next;
            if (l2!=nullptr) l2 = l2->next;
        }
        return startPtr;
    }
};