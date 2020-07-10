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
