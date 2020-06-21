TASK 1
ADD TWO NUMBERS 
You are given two non-empty linked lists representing two non-negative integers.
The digits are stored in reverse order and each of their nodes contain a single digit.
Add the two numbers and return it as a linked list.

class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        
        int carry=0 ;
        ListNode* head=NULL ;
        ListNode* cur=NULL ;
        int sum=0 ;
         
        while(l1!=NULL || l2!=NULL ||sum>0   )
        {   
            if(l1==NULL && l2!=NULL)
                sum=l2->val+carry ;
                
           if(l2==NULL && l1!=NULL)
               sum=l1->val+carry ;
            
           else if(l1!=NULL && l2!=NULL) 
               sum = l1->val + l2->val +carry ;
            
            
            if(head==NULL)
            {  
                cur=new ListNode(sum%10) ;
                head=cur ;
            }
            
            else {cur->next=new ListNode(sum%10) ;
                  cur=cur->next ; }
            
            sum=sum/10 ;
            carry=sum%10 ;
            if(l1!=NULL) l1=l1->next ;
            if(l2!=NULL) l2=l2->next ;
            
        }
        return head ;       
        
    }
};

