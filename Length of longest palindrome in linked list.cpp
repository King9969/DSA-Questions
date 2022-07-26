int findCommon(Node* f, Node* s){
   int cnt =0;
   while(f != NULL and s != NULL){
       if(f->data == s->data )cnt += 2;
       else break;
       f = f->next;
       s = s->next;
   }
   return cnt;
}
int maxPalindrome(Node *head){
   Node *curr = head, *prev = NULL, *next;
   int ans = 1;
   while(curr->next){
       next = curr->next;
       curr->next = prev;
       int cnt1 = findCommon(curr, next);
       if(ans < cnt1) ans = cnt1;
       int cnt2 = findCommon(prev, next);
       if (ans < cnt2 + 1) ans = cnt2 + 1;
       prev = curr;
       curr = next;
   }
   return ans;
}
