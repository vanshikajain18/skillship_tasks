TASK 3 
QUERIES ON A PERMUTATION
Given the array queries of positive integers between 1 and m, you have to process all queries[i] (from i=0 to i=queries.length-1) 

class Solution {
    list<int> values;
public:
    vector<int> processQueries(vector<int>& queries, int m) {
        vector<int> output;
        for(int i = 1; i <= m; ++i) {
            values.push_back(i);
        }
        for(int i = 0; i < queries.size(); ++i) {
            int res = find(queries[i]);
            output.push_back(res);
        }
        return output;
    }
    
    int find(int val) {
        int index = 0;
        for(auto it = values.begin(); it != values.end(); ++it) {
            if(*it == val) {
                values.erase(it);
                values.push_front(val);
                break;
            }
            index++;
        }
        return index;
    }
};
