//write a funciton to calculate total number of duplicate elements in the arary
#include<stdio.h>
int countduplicate(int arr[],int n);
int main()
{
    int n,ans;
    printf("Enter the array size ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the array elements ");
    for(int i=0;i<n;i++)
        scanf("%d",&arr[i]);
    ans=countduplicate(arr,n);
    printf("The count of duplicate elements in the array is %d",ans);
}

int countduplicate(int arr[],int n)
{
    int count=0;
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(arr[i]==arr[j])
                count++;
        }
    }
    return count;
}