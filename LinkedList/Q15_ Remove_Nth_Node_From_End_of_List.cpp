#include<bits/stdc++.h>
using namespace std;
  struct ListNode {
      int val;
      ListNode *next;
      ListNode() : val(0), next(nullptr) {}
      ListNode(int x) : val(x), next(nullptr) {}
      ListNode(int x, ListNode *next) : val(x), next(next) {}
  };

class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
          if(head==NULL or head->next==NULL ) return NULL;
          ListNode*temp=head;
          int cnt=0;
          while(temp) {
               temp=temp->next;
               cnt++;
          }
          if(cnt==n) return head->next;
          cnt-=n;
          temp=head;
          cnt--;
          while(cnt--) temp=temp->next;
          // cout<<temp->val;
          temp->next=temp->next->next;
          return head;
     }
};
