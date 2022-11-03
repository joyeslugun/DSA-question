class Solution
{
    public:
    //Function to reverse words in a given string.
    string reverseWords(string S) 
    { 
        int n = S.length();
         string word;
         string str = "";
         string result = "";
        for(int i = 0;i<n;i++)
        {
            if(S[i] == '.')
             {
                 word = S[i]+str;
                 str = ""; 
                 
             }
             else
             {
                 str  += S[i];
             }
        result = word+result;
       word="";
        }
       if(str!="")
        result = str+result;
        return result;
        
       // cout<<"reverse array: "<<S;
    
    } 
};
