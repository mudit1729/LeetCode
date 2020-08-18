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
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2){
        ListNode* ans;
        if(l1==NULL) return l2;
        if(l2==NULL) return l1;
        if(l1->val < l2->val) {
            ans = l1;
            l1->next = mergeTwoLists(l1->next, l2);
        } else {
            ans = l2;
            l2->next = mergeTwoLists(l2->next, l1);
        }
        return ans;
    }
    
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        int sz = lists.size();
        int dist = 1;
        int i;
        if(lists.size()==0) {return NULL;}
        while(dist<sz){
            i=0;
            while(i<sz-dist){
                lists[i] = mergeTwoLists(lists[i], lists[i+dist]);
                i = i + dist*2;
            }
            dist = dist*2;
        }
        return lists[0];
    }
};