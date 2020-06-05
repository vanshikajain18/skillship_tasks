TASK 2 


#include <iostream>
using namespace std;

int main() {
    int t ;
    cin>>t ;
    while(t--)
    {
        int n ;
        cin>>n ;
        int k ;
        cin>>k ;
        int a[n] ;
        for(int i=0;i<n;i++)
        {
            cin>>a[i] ;
        }
        
        int l=0 , h=n-1 , count=-1 ;
        while(l<=h)
        {
          int mid=(l+h)/2 ;
          
          if(l==k || h==k || a[mid]==k)
          {count=1 ;
          break ; }
          
          else if(a[mid]<k)
          l=mid+1 ;
          
          else if(a[mid]>k)
          h=mid-1 ;
          
        }
        
        cout<<count<<"\n" ;
    }
	
	return 0;
}


TASK 1 
	class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        int m =grid.size()-1  ;
        int n =grid[1].size()-1 ;
        int count=0;
       
       for(int j=0;j<=n ; j++)
       {  if(grid[m][n-j]>=0 )
           continue ;
        
       else { int i=0 ;
          while(i<=m && grid[m-i][n-j]<0)
          {  
              count++ ; 
              i++;
          }
       }

       }
        return count ;
              
    }
};
