/*Write a function to rotate an array by n position in d direction. The d is an indicative
value for left or right. (For example, if array of size 5 is [32, 29, 40, 12, 70]; n is 2 and
d is left, then the resulting array after left rotation 2 times is [40, 12, 70, 32, 29] )*/
#include<stdio.h>
void rotateleft(int [],int );
void rotateright(int [],int );
int main()
{
    int n,d,pos;
    printf("Enter the array size ");
    scanf("%d",&n);
    printf("Enter array elements ");
    int arr[n];
    for(int i=0;i<n;i++)
        scanf("%d",&arr[i]);
    printf("Enter in which direction you want to rotate \n1.left\n2.right\n");
    scanf("%d",&d);
    printf("Enter the position by which you want to rotate \n");
    scanf("%d",&pos);
    while(pos--)
    {
        if(d==1)
            rotateleft(arr,n);
        else
            rotateright(arr,n);
    }
    for(int i=0;i<n;i++)
        printf("%d ",arr[i]);
}
void rotateleft(int arr[],int n)
{
    int temp=arr[0];
    for(int i=0;i<n-1;i++)
    {
        
        arr[i]=arr[i+1];
    }
    arr[n-1]=temp;
}

void rotateright(int arr[],int n)
{
    int temp=arr[n-1];
    for(int i=n-1;i>0;i--)
    {
        
        arr[i]=arr[i-1];
    }
    arr[0]=temp;
}