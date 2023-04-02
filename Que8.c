#include<stdio.h>
void countduplicate(int arr[],int n);
int main()
{
    int n,ans;
    printf("Enter the array size ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the array elements ");
    for(int i=0;i<n;i++)
        scanf("%d",&arr[i]);
    countduplicate(arr,n);
}

void countduplicate(int arr[],int n)
{
    
    for(int i=0;i<n;i++)
    {
        int count=0;
        for(int j=i+1;j<n;j++)
        {
            if(arr[i]==arr[j])
                count++;
        }
        if(!count)
            printf("%d ",arr[i]);
    }
}