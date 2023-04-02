//write a funciton to calculate total number of duplicate elements in the arary
#include<stdio.h>
int main()
{
    int n,count=0;
    printf("Enter the array size ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the array elements ");
    for(int i=0;i<n;i++)
        scanf("%d",&arr[i]);
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(arr[i]==arr[j])
                count++;
        }
        printf("The count of %d element in the array is %d\n",arr[i],count+1);
        count=0;
    }
}
