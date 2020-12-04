//https://practice.geeksforgeeks.org/problems/merge-two-sorted-arrays-1587115620/1#

void merge(int arr1[], int arr2[], int n, int m) 
{ 
    for(int i=0;i<n;i++)
    {
        if(arr1[i]>arr2[0])
        {
            swap(arr1[i],arr2[0]);
            sort(arr2, arr2+m);
        }
    }
    
} 
// for meeting the expected time complexity
// use GAP method..

int next(int gap)
{
    if (gap <= 1)
    {
        return 0;
    }
    return (gap / 2) + (gap % 2);
}

void merge(int arr1[], int arr2[], int n, int m) 
{
    int i,j,gap=n+m;
    for(gap=next(gap);gap>0;gap=next(gap))
    {
        //in first arr
        for(i=0;i+gap<n;i++)
        {
            if(arr1[i]>arr1[i+gap])
            {
                swap(arr1[i],arr1[gap+i]);
            }
        }
        
        //in both the arr
        for(j=gap>n ? gap-n : 0; i < n && j < m; i++, j++)
        {
            if(arr1[i]>arr2[j])
            {
                swap(arr1[i],arr2[j]);
            }
        }
        if(j<m)
        {
            for (j = 0; j + gap < m; j++)
            {
                if (arr2[j] > arr2[j + gap])
                {
                    swap(arr2[j], arr2[j + gap]);
                }
            }
        }    
    }
} 

// Time Complexity ==>O(NlogN)
// Space Complexity ==> O(1)

