#include <stdio.h>
int main()
{
    int i, j,rows;
    printf("Enter the Rows:");
    scanf("%d",&rows);
    if (rows>0)
        {
        	printf("Input is Valid\n",rows);
		}
		else
		{
			printf(" Input is Invalid\n");
		}
    for(i=1; i<=rows; i++)
    {
        for(j=1; j<=i; j++)
        {
            printf(" %d ",i);
        }
        printf("\n");
    }
    return 0;
}
