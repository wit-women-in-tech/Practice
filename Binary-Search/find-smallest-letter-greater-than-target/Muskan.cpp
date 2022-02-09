class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
       int n=letters.size();
        char c=target;
        for(int i=0;i<n;i++)
        {
            if(letters[i]>c)
            {
                c=letters[i];
               return c;
            }
        }
     
         return letters[0];
        
    }
};
