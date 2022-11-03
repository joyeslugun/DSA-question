
class Solution
{
   public:
    int findSum(int A[], int N)
    {
    	//code here.
    	int min = A[0];
    	int max = A[0];
    	int sum = 0;
    	for(int i =0;i<N;i++)
    	{
    	    if(min>A[i])
    	    {
    	        min = A[i];
    	    }
    	    if(max <A[i])
    	    {
    	        max = A[i];
    	    }
    	    sum = min + max;
    	}
    	
    	return sum;
    }

};
