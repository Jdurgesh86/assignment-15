#include<stdio.h>
int main()
{
    int n;
    printf("Enter the array size ");
    scanf("%d",&n);
    int arr[n],arr1[n];
    printf("Enter the first array elements ");
    for(int i=0;i<n;i++)
        scanf("%d",&arr[i]);
    printf("Enter the second array elements ");
    for(int i=0;i<n;i++)
        scanf("%d",&arr1[i]);
    int ans[2*n],i;
    for(i=0;i<n;i++)
        ans[i]=arr[i];
    for(int j=0;j<n;j++)
    {
        ans[i]=arr1[j];
        i++;
    }
    for(int i=0;i<2*n-1;i++)
    {
        for(int j=i+1;j<2*n;j++)
        {
            if(ans[i]<ans[j])
            {
                int temp;
                temp=ans[i];
                ans[i]=ans[j];
                ans[j]=temp;
            }
        }
    }
    for(int i=0;i<2*n;i++)
    {
        printf("%d ",ans[i]);
    }
}