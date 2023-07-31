#include <stdio.h>
int main()
{
    int r,c;
    int arr[4][4]={8,17,9,6,5,2,11,18,7,27,28,0,4,1,3,10};

    for(r=0;r<4;r++)
    {
        for(c=0;c<4;c++)
        {
            printf("%d  ",arr[r][c]);
        }
        printf(" \n\n");
    }

     for(r=0;r<4;r++)
    {
        for(c=0;c<4;c++)
        {
         if(arr[r][c]==5)
            {
               printf("The element is at array [%d][%d] array address\n ", r, c);
            }

        }

    }

}
