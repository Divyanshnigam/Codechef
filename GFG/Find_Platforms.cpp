//https://practice.geeksforgeeks.org/problems/minimum-platforms-1587115620/1


int findPlatform(int arr[], int dep[], int n)
{
    //greedy requires first sorting of arrays 
	sort(arr,arr+n);
	sort(dep,dep+n);
	// departure_of_prev --> dep[0];
	// arrival_of_cur --> cur[1];
	int i=1,j=0,platform_req=1;
	while(i<n)
	{
	    if(dep[j]<arr[i])
	    {
	        i++;
	        j++;
	    }
	    else
	    {
	        i++;
	        platform_req++;
	    }
	}
	return platform_req;
}

