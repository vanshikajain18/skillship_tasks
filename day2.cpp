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
       int m =grid.size()  ;
        int n =grid[0].size() ;
        int count=0;
        int i=m-1 ;
        for(int j=0;j<n;j++)
        {
            while(i>=0)
            {
                if (grid[i][j]<0)
                {count = count+n-j ;
                 i-- ;}
                
                else break ;
                
            }
        }
 
    
        return count ;
              
    }
};
