
class Solution{
    public:
    //Function to return the count of number of elements in union of two arrays.
    int doUnion(int a[], int n, int b[], int m)  {
        //code here
        int count =  1;
        int k = m+n;
        int j = 0;
        //int i = 0;
        int arr[k];
        int l = 0;
        
       /* while(i<n && j<m)
        {
            if(a[i] <= b[j])
            {
              arr[l] = a[i];
              i++;
            }
            else
            {
                arr[l] = b[j];
                j++;
            }
            l++;
        }
        while(i<n)
        {
            arr[l] = a[i];
            i++;
            l++;
        }
        while(j<m)
        {
            arr[l] = a[j];
            j++;
            l++;
        }
        */
      // more research on this
        for(int c = 0;c<n;c++)
        {
            arr[c] = a[j];
            j++;
        }
        for(int d = n;d<k;d++ )
        {
            arr[d] = b[l];
            l++;
        }
        sort(arr,arr+k);
        for(int i = 0;i<k-1;i++)
        {
             if(arr[i + 1] != arr[i])
            {
                count++;
            }
        }
        
        return count;
    }
};
