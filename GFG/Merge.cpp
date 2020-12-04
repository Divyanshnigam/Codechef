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
