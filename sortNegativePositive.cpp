class Solution {
    public:
void segregateElements(int a[], int n)
{
   int count1  = 0;
   int count2 = 0;
   for(int i = 0;i<n;i++)
   {
       //for positive
       if(a[i]>0)
       {
           count1++;
       }
       //for negative
       if(a[i]<0)
       {
           count2++;
       }
   }
   int a1[count1];
   int a2[count2];
   int i = 0;
   int k = 0;
   for(int j = 0;j<n;j++)
   {
       if(a[j]>0)
       {
         a1[i] = a[j];
         i++;
       }
       else
       {
           a2[k] = a[j];
           k++;
       }
   }
   int x = count1+count2;
   int d = 0;
   int f = 0;
   for(int c = 0;c<count1;c++)
   {
       a[c] = a1[d];
       d++;
   }
   for(int e = count1;e<x;e++)
   {
       a[e] = a2[f];
       f++;
   }



}

};
