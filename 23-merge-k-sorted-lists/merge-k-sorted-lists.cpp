class Solution {
public:
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        vector<int>arr;
        ListNode* temp=NULL;
        for(int i=0;i<lists.size();i++)
        {
            temp=lists[i];
            while(temp!=NULL)
            {
                arr.push_back(temp->val);
                temp=temp->next;
            }
        }sort(arr.begin(),arr.end());

        ListNode* dummy=new ListNode(0);
        ListNode* curr= dummy;
        for(int x:arr)
        {
            curr->next=new ListNode(x);
            curr=curr->next;
        }
        return dummy->next;
    }
};