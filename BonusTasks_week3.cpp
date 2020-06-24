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
 class node
{public:
  int val ;
 node* next ;
 node() {
     next=NULL ;
 }
 node(int data)
 {
     val=data ;
     next=NULL ;
 }
 
};

class MyLinkedList {
public:
    node* head ;
    node* tail ;

     MyLinkedList() {
      head=tail=NULL ;
    }
    
    
    int get(int index) {
        
        if(head==NULL)
            return -1 ;
        node* cur =head ;
    
        for(int i=0;i<index;i++)
        {
            cur=cur->next ;
        }
        
      if(cur!=NULL) return cur->val ;
      else return -1 ;     
    }
    
    void addAtHead(int val) {
       node* cur=new node(val) ;
        cur->next=head;
        head=cur ;
    }
    
    void addAtTail(int val) {
        if(head==NULL)
            return ;
        
         node* cur=new node(val) ;
    if(tail!=NULL)    tail->next=cur;
    }
    
   
    void addAtIndex(int index, int val) {
        
        if(head==NULL)
        {
            if (index==0)
                head=new node(val) ;
        }
            
       else
       {node* cur=head;
        int k=0 ;
        while(k!=index-1  && cur!=NULL)
        {
            cur=cur->next;
            k++;
        }
        if(cur!=NULL)
        {node* root=new node(val);
        root->next=cur->next ;
        cur->next=root ;}
       }
    }
    
    void deleteAtIndex(int index) {
        if(head==NULL)
       return ;
            
       else
       {node* cur=head;
        node* prev= NULL ;
        int k=0 ;
        while(cur!=NULL)
        {

        if(k==index-1 )
        { if(prev!=NULL) prev->next=cur->next;
         delete cur ;
        }
            cur=cur->next;
          if(prev!=NULL)  prev=prev->next;
            k++;
       }
    }
    }  
};
 
 
 TASK 4 
    REVERSE NODES IN K-GROUP 
    class Solution {
public:
    bool has_n_elements(ListNode* head, int n) {
        ListNode* curr = head;
        for (int count = 0; count < n; ++count) {
            if (curr == nullptr) return false;
            curr = curr->next;
        }
        return true;
    }
    
    ListNode* reverseKGroup(ListNode* head, int k) {
        if (head == nullptr) return head;
        
        ListNode* pre_reversed = new ListNode(-10, head);
        ListNode* dummy = pre_reversed;
        ListNode* curr = head;
        do {
            ListNode* first = curr;
            ListNode* prev = curr;
            curr = curr->next;
            for (int reversed_edges = 1; reversed_edges < k; ++reversed_edges) {
                ListNode* next = curr->next;
                curr->next = prev;
                prev = curr;
                curr = next;
            }
            first->next = curr; 
            pre_reversed->next = prev;
            pre_reversed = first; 
            
        } while (has_n_elements(curr, k));
        
        head = dummy->next;
        delete dummy;
        return head;
    }
};
    
   
TASK 5
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


TASK 6 
    ADD TWO NUMBERS 
    
    class node
{
public:
int val ;
node* next ;

node(int x)
{
  val=x ; next=NULL ;
}
};

class Solution {
public:
    string addStrings(string num1, string num2) {
        
        string s;
       
          node* cur=NULL ;
        node* head1 =NULL;
        node* tail1=NULL ;
    for(int i=0 ; i<num1.length() ;i++)
     { 
        
        if(head1==NULL)
        {cur=new node(num1[0]) ;
         head1=cur;
         tail1=cur ;
        }
        
        else 
        {
            cur=new node(num1[i]) ;
            tail1->next=cur ;
            tail1=cur ;
        }
     } 
        cur=NULL ;
        node* head2 =NULL;
        node* tail2=NULL ;
         for(int i=0 ; i<num2.length() ;i++)
     {  
        
        if(head2==NULL)
        {cur=new node(num2[0]) ;
         head2=cur;
         tail2=cur ;
        }
        
        else 
        {
            cur=new node(num2[i]) ;
            tail2->next=cur ;
            tail2=cur ;
        }
     } 
        cout<<head1->val<<" "<<tail2->val ;
     int sum=0 ,carry=0,i=0 ;
        node* head=NULL ;
         cur=NULL ;

         
        while(head1!=NULL || head2!=NULL ||sum>0   )
        {   
            if(head1==NULL && head2!=NULL)
                sum=head2->val+carry ;
                
           if(head2==NULL && head1!=NULL)
               sum=head1->val+carry ;
            
           else if(head1!=NULL && head2!=NULL) 
               sum = head1->val + head2->val +carry ;
            
            
          s[i]=sum%10 ;
            i++ ;
            sum=sum/10 ;
            carry=sum%10 ;
            if(head1!=NULL) head1=head1->next ;
            if(head2!=NULL) head2=head2->next ;
            
        }
        
    
    return s ;
        
    }
};
    
