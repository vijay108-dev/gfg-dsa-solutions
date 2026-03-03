class Solution {
public:
    string caseSort(string& s) {
        // Store uppercase and lowercase letters separately
        string uppercaseLetters;
        string lowercaseLetters;
        
        for(int i=0;i<s.length();i++) 
        {
            
            if(isupper(s[i])){
                uppercaseLetters.push_back(s[i]);
            }
            else{
                lowercaseLetters.push_back(s[i]);
            }
        }
        
        //Sort both groups individually
        sort(uppercaseLetters.begin(), uppercaseLetters.end());
        sort(lowercaseLetters.begin(), lowercaseLetters.end());
        
        //Rebuild original string based on case position
        int upperIndex=0;
        int lowerIndex=0;
        
        for (int i=0;i<s.length();i++) 
        {
            
            if(isupper(s[i])){
                s[i]=uppercaseLetters[upperIndex];
                upperIndex++;
            }
            else{
                s[i]=lowercaseLetters[lowerIndex];
                lowerIndex++;
            }
        }
        return s;
    }
};
//TC =>O(n log n)
//SC => O(n)