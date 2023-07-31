#include <stdio.h>
int main()
{
    int r,c;
    int arr1[3][3]={1,5,4,8,3,6,2,7,9};
    int arr2[3][3]={4,5,6,2,3,7,1,2,3};
    int sum[3][3];


    for(r=0;r<3;r++)
    {
        for(c=0;c<3;c++)
        {
            printf("%d ",arr1[r][c]);
        }
        printf("\t");


        for(c=0;c<3;c++)
        {
            printf("%d ",arr2[r][c]);
        }
        printf("\t");

         for(c=0;c<3;c++)
        {
            sum[r][c]=arr1[r][c]+arr2[r][c];
            printf("%d  ",sum[r][c]);
        }
          printf("\n");

    }

}
