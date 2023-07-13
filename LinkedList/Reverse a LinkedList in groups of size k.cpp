✅Always recursion intutive very hard

ListNode* dfs(ListNode* head, int k) {
        ListNode* temp = head;
        for(int i = 0; i < k; i++){            // 🟩Loop to check whether there is k elements or not. If not dont reverse
            if(!temp) return head;
            temp = temp->nxt;
        }
	
        ListNode* curr = head,*prev = nullptr,*nxt;   //NEXT IS DIRECTLLY INTIALixed inside loop
	ListNode* curr=head;
        ListNode* prev=NULL;
        ListNode* next=NULL;
        for(int i = 0; i < k; i++){
            nxt = curr->nxt;  
            curr->nxt = prev;
            prev = curr;
            curr = nxt;
        }
        head->nxt = dfs(curr, k);
        return prev;

	ListNode* reverseKGroup(ListNode* head, int k) {
        return dfs(head,k);
    }
}
