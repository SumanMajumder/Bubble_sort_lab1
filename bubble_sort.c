#include<stdio.h>
int main()
{
    int i,j,swapping=0,num,array[50];
    printf("\t******* Array sorting program with bubble sort algorithm ********\n\n");
    printf("           --------------------------------------------------------\n");
    printf("How many elements you want to enter :");
    scanf("%d",&num);
    printf("Enter %d element:\n",num);
    for(i=0;i<num;i++)
        scanf("%d",&array[i]);
        for(i=0;i<num-1;i++)
        {
        for(j=0;j<num-i-1;j++)
        {
        if (array[j]>array[j+1])
        {
            swapping=array[j];
            array[j]=array[j+1];
            array[j+1]=swapping;
        }
        }
        }
        printf("Sorted array : ");
        for (i=0;i<num;i++)
        {
            printf("%d ",array[i]);
        }

   return 0;
}
