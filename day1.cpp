

class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target)
    {   int n= numbers.size();
        vector<int> v ;
        
        for(int i=0 ;i<n;i++)
        {   if(i>0 && numbers[i]==numbers[i-1] )
            continue ;
         
            for(int j=i+1 ;j<n; j++)
            {  
                 if(j>0 && numbers[j]==numbers[j-1] && numbers[j]+numbers[j-1]!=target)
            continue ;
         
                if (numbers[i] +numbers[j] == target )
                { v.push_back(i+1) ;
                    v.push_back(j+1) ;
                    return v;}
            }
        
        }
        
    return v ;}

};
