#include<stdio.h>
#include<limits.h>
int greatest(int ,int []);
int main()
{
    int n,great;
    printf("Enter the size of the array ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the array elements ");
    for(int i=0;i<n;i++)
        scanf("%d",&arr[i]);
    great=greatest(n,arr);
    printf("The greatest number in the array is %d",great);
}
int greatest(int n,int arr[])
{
    int max=INT_MIN;
    for(int i=0;i<n;i++)
    {
        if(arr[i]>max)
            max=arr[i];
    }
    return max;
}