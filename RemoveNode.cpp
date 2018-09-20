#Given a linked list, remove the n-th node from the end of list and return its head.
ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* temp = head;
        int lenLL = 0;
        while(temp!= NULL){
            lenLL++;
            temp = temp->next;
        }
        //cout<<lenLL;
        if(n>lenLL){
            return head;
        }
        else if(n == lenLL){
            head = head->next ;
            return head;
        }
        int rem = lenLL - n;
        int i =1;
        temp = head;
        while(i!=rem){
            temp = temp->next;
            i++;
        }

        temp->next = temp->next->next;

        return head;
    }
