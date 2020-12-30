// https://practice.geeksforgeeks.org/problems/fractional-knapsack-1587115620/1#
//class implemented
/*
struct Item{
    int value;
    int weight;
};
*/

bool compare(struct Item a, struct Item b)
{
double r1 = (double)a.value / a.weight;
double r2 = (double)b.value / b.weight;
return r1 > r2;
}
// function to return fractionalweights
double fractionalKnapsack(int W, Item arr[], int n)
{
    // Your code here
    double ans=0.0;
    sort(arr,arr+n,compare);
    for(int i=0;i<n;i++)
    {
        if(arr[i].weight<=W)
        {
            W-=arr[i].weight;
            ans+=arr[i].value;
        }
        else
        {
            ans += arr[i].value * ((double) W / arr[i].weight);
            break;
        }
    }
    return ans;
}
