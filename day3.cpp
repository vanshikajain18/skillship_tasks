TASK 1 

#include <iostream>
using namespace std;

int main() {
int t ;
cin>>t ;
while(t--)
{
    int n ;
    cin>>n ;
    int a[n+3] ;
    
    for(int i=0;i<n+2;i++)
    { a[i]=0 ;}
    
    for(int i=0;i<n+2;i++)
    {   int k ;
        cin>>k  ;
        a[k]++ ;
        if(a[k]==2)
        cout<<k<<" " ;   
    } 
    cout<<"\n" ;
}
	return 0;
}



TASK 2 
	
	#include <iostream>
using namespace std;

int main() {
	
	int t;
	cin>>t;
	while(t--)
	{
	    int n ;
	    cin>>n ;
	    int a[10]={0} ;
	    
	    for(int i=0;i<n;i++)
	    {   int num ;
	        cin>>num ;
	        while(num>0)
	        {
	        a[num%10]++ ;
	        num=num/10 ;
	        }
	    }
	    
	    for(int i=0;i<10;i++)
	    {
	        if(a[i] !=0)
	        cout<<i<<" " ;
	    }
	    
	   cout<<"\n" ;
	}
	

return 0;
}


TASK 3 
	
	class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& A) {
        
        vector<vector<int>> v ;
        int m=A.size();
        int n= A[0].size() ;
        v.resize(n) ;
        
        for(int i=0;i<n ;i++)
        {  
            for(int j=0;j<m;j++)
            {  int k=A[j][i] ;
               v[i].push_back(k) ;
            }
        }
        return v ;
        
        
    }
};