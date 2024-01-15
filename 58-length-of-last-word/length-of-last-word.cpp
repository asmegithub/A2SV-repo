class Solution {
public:
    int lengthOfLastWord(string s) {
        int length=s.length()-1;
        int lwLength=0;

        // remove trailing space in the string
        while(length>=0&&s[length]==' '){
            length--;
        }
        // count chaaracters of last word 
        while(length>=0&&s[length]!=' '){
            lwLength++;
            length--;
        }

        return lwLength;
        
    }
};