class Solution {
public:
    string longestCommonPrefix(vector<string>& str) {
        int n = str.size();
        if(n==0) return "";
        
        string ans  = "";
        sort(begin(str), end(str));
        string a = str[0];
        string b = str[n-1];
        
        for(int i=0; i<a.size(); i++){
            if(a[i]==b[i]){
                ans = ans + a[i];
            }
            else{
                break;
            }
        }
        
        return ans;
        
    }
};

// The code below is very much self explanatory.

// We first sort the array of strings.
// Then, we choose the first and last string in the array. [They are supposed to be the most different among all the pairs of strings in the sorted array]
// We just compare how many common characters match from index i = 0 of these two strings.