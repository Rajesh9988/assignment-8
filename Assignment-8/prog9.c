#include<stdio.h>
int main()
{
    int i,j;
    for ( i = 1; i <=4; i++)
    {
        printf("\n");
        int k =1;
        for ( j = 0; j <=7; j++)
        {
            if (j>=i&&j<=8-i)
            {
                if (j<4)
                {
                    printf("%d",k++);
                }
                else
                {
                    printf("%d",k--);
                }
                
            }
            else
            {
                printf(" ");
            }
            
        }
        
        
    }
    
}