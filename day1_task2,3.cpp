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
	    int a[n-1] ;
	    int sum=0 ;
	    int total= n*(n+1)/2 ;
	    
	    for(int i=0 ;i<n-1;i++)
	    {  cin>>a[i];
	       sum = sum+a[i] ;
	    }
	    
	    cout<<(total-sum) ;
	    
	    cout<<"\n" ;
	}
	return 0;
}



TASK 3 
	
	class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        
        vector<int> v;
        int n=nums.size() ;
        
        for(int i=0; i<n ;i++)
        {  int count=0 ;
            for(int j=0; j<n; j++)
            {
                if (nums[j]<nums[i])
                    count++ ;
            }
            v.push_back(count) ;
        }
        return v ;
    }
};
