{
    public:
    void sort012(int a[], int n)
    {
        // code here
        int low = 0;
        int mid = 0;
        int high = n-1;
        while(mid<=high)
        {
            switch(a[mid])
            {
            case 0:
                   swap(a[mid++],a[low++]);
                   break;
            case 1:
                 mid++;
                 break;
            case 2:
                swap(a[mid],a[high]);
                high--;
                break;
                
            }
            
            
        }
    }
    
};
