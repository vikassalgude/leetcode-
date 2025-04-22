class Solution {
public:
    bool isCircularSentence(string sentence) {
        string a="";
        string b="";
        int c=0;
        
        for(int i=0;i<sentence.size();i++){
            if(sentence[i]==' '){
              a=sentence[i-1];
              b=sentence[i+1];
              c++;
              if(a!=b)return 0;
            }
        }
        if(c==0)return sentence[0]==sentence[sentence.size()-1];
        return a==b&&sentence[0]==sentence[sentence.size()-1];
        
     
    }
};
