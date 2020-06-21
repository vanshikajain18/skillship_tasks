#include <iostream>
using namespace std;

class node{
  public:
  int data ;
    node* next ;

    node(int x)
    {
        data=x ;
        next=NULL ;
    }
};

node* createll(int n )
{  node* head=NULL ;
    node* tail=NULL ;

    while (n--)
    {   int x;
        cin>>x ;

        if (head == NULL) {
            node *cur = new node(x);
            head = cur;
            tail = cur;
        }
        else {
            node *cur = new node(x);
            tail->next = cur;
            tail = cur;
        }
    }
    return head;

}

void printll(node* root)
{
    while (root != NULL) {
        cout << root->data << " ";
        root = root->next;
    }

}

int main() {
	int t ;
	cin>>t ;
	while (t--)
	{   int n ;
	    cin>>n ;

	    node* head=createll(n) ;

	    if(head==NULL)
	    return 0 ;

	    node* h1=NULL ;  \\to track the first odd no.
	    node* odd=NULL ;   \\ to connect all odd nos.
	    node* even=NULL ;   \\ to connect all even nos.
	    node* cur= head;
	    int cnt=0 ;


	while(cur!=NULL)
	{ int x ;
	 x=cur->data ;
	  if( x%2==0)  //even
	    {
  	        if(cnt==0)
	        { head=cur ;
	        cnt =1 ; }

	        else even->next=cur ;

	        even=cur ;
	        cur=cur->next ;

	  }

	  else //odd
	  {
	      if(h1==NULL)
	       h1=cur ;

	      else odd->next=cur ;

	      odd=cur ;
	      cur=cur->next ;
	  }
	}

	if(even!=NULL)  even->next=h1 ;
	  odd->next=NULL ;
	  printll(head);
	  cout<<"\n" ;
	}
}

