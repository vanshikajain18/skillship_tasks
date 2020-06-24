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


TASK 2 
   ROTATE LIST 
   
   class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {
        
        if (head==NULL)
            return head ;
        
        ListNode* tail =head ;
        int n =1 ;
        
        while(tail->next!=NULL)
        {
           n++ ;
            tail=tail->next ;
            
        }
        tail->next= head ;
        
        for(int i=k;i>=0;i--)
        {  
            tail=tail->next ;
            head=head->next;
        }
        tail->next=NULL ;
        return head ;
    }
};

TASK 3
    DESIGN LINKED LIST 
    
   
TASK 4 
    COUNT AND SAY 
    
    class Solution {
public:
    string countAndSay(int n) {
        
        string s ;
        if (n == 1)
            return "1";
        
        
        int count=0;
        string str ;
        s = countAndSay(n - 1);
        
        for (int i = 0; i <s.length(); i++)
        {   
            count++;
            while (s[i] == s[i + 1] && i+1!=s.length() )
            {
                i++;
                count++;
            }
            
            str= str + to_string(count) + s[i];
            count=0;
        }
        return str;
    }
};
