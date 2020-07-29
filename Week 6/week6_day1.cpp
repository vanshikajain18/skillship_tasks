TASK 1 
HAPPY AND SETS 

#include<bits/stdc++.h>

using namespace std;

int main() {
	int n ;
	cin>>n ;
	long long int sum=1 ;
	long long int a[n] ;

	for(int i=0;i<n;i++)
	{  
		cin>>a[i] ;
       sum = (sum*(a[i]+1)) %1000000007;
	}

	cout<<sum-1 ;


}


TASK 2
K SPECIAL CELLS

#include<bits/stdc++.h>
 
using namespace std;
 
 
int main() {
    
    int t;
    cin>>t ;
    while(t--)
    {   
    int n,m,k ;
    cin>>n>>m>>k ;
    
    int **a ;
    a=new int*[n] ;
    for(int i=0 ;i<n;i++)
    {
        a[i]=new int[m] ;
    }
 
        for(int i=0 ;i<n ;i++)
        {
            for(int j=0;j<m;j++)
            {
              if(i==0 || j==0)
              a[i][j]=1 ;
 
              else a[i][j]= a[i-1][j]+a[i][j-1] ;
            }
 
        }
        
        long long int sum=0 ;
    
        for(int i=0 ;i<k ;i++)
        {
           int x,y,p ;
           cin>>x>>y>>p ;
           a[x-1][y-1]=a[x-1][y-1]*p ;
           sum=(sum+a[x-1][y-1]) %1000000007 ;
        }
        
        cout<<sum<<"\n";
 
    }	
 
}
