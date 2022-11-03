
class Solution{
    public:
    // arr : given array
    // l : starting index of the array i.e 0
    // r : ending index of the array i.e size-1
    // k : find kth smallest element and return using this function
    void merge(int arr[],int l ,int mid,int r)
    {
        int n1 ;
        int n2;
        n1 = mid -l + 1;
        n2 = r- mid;
        int arr1[n1];
        int arr2[n2];
        for(int i = 0;i<n1;i++)
        {
            arr1[i] = arr[l+i];
        }
        for(int j = 0;j< n2;j++)
        {
            arr2[j] = arr[mid+1+j]; 
        }
        int i = 0;
        int j = 0;
        int k = l;
        
        while(n1>i && n2>j)
        {
            if(arr1[i] <= arr2[j])
            {
                arr[k] = arr1[i];
                i++;
            }
            else
            {
                arr[k] = arr2[j];
                j++;
            }
            k++;
        }
        while(n1>i)
        {
            arr[k] = arr1[i];
            i++;
            k++;
        }
        while(n2>j)
        {
            arr[k] = arr2[j];
            j++;
            k++;
        }
    }
    void merge_sort(int arr[],int l ,int r)
    {
        if(l<r)
        {
        int mid = l +(r-l)/2;
         merge_sort(arr,l,mid);
         merge_sort(arr,mid+1,r);
         merge(arr,l,mid,r);
        }
         
    }
    int kthSmallest(int arr[], int l, int r, int k) {
        //code
        merge_sort(arr,l,r);
        //for(int i = l;i<=r;i++)
        //{
          //  cout<<arr[i]<<" ";
       // }
         return arr[k-1];
    }
   
    
};
