class Solution {
public:
    int possibleStringCount(string word) {
        int x=0;
        int i=0;
        int j=1;
        while(j<word.size()){
            if(word[i]==word[j]){
                int c=0;
                while(word[i]==word[j]){
                    c++;i++;
                    j++;
                }
                x+=c;
            }else{
                i++;
                j++;
            }
        }
        return x+1;
    }

};
