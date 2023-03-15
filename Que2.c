//Write a function to find the smallest number from the given array of any size. (TSRS)
#include<stdio.h>
#include<limits.h>
int smallest(int ,int[]);
int main()
{
    int n,small;
    printf("Enterh the size of the array ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the array elements ");
    for(int i=0;i<n;i++)
        scanf("%d",&arr[i]);
    small=smallest(n,arr);
    printf("The smallest number in the array is %d",small);
}

int smallest(int n,int arr[])
{
    int min=INT_MAX;
    for(int i=0;i<n;i++)
        if(arr[i]<min)
            min=arr[i];
    return min;
}