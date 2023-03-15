#include<stdio.h>
void sortarr(int, int[]);
int main()
{
    int n;
    printf("Enter the size of the array ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the array elements ");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    sortarr(n,arr);
}

void sortarr(int n,int arr[])
{
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(arr[i]>arr[j])
            {
                int temp;
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    for(int i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
}