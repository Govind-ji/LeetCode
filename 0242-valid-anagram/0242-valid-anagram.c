#include<string.h>
bool isAnagram(char* s, char* t) 
{
    if(strlen(s)==strlen(t))
    {
         int ar[26],c,i,r=0;
         for(int i=0;i<26;i++)
         ar[i]=0;
         for(i=0;i<strlen(s);i++)
         {
            c=((int)s[i])-97;
             ar[c]++;
         }
         for(i=0;i<strlen(s);i++)
         {
            c=((int)t[i])-97;
             ar[c]--;
         }
        for(i=0;i<26;i++)
       { if(ar[i]!=0)
        r++;}
        if(r==0)
        return true;
        else
        return false;
        
    }
    else 
        return false;
}