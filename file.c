#include <stdio.h>
int main(){
    //nested loop 
    //pyramid pattern
    // int i;
    // printf("Pyramid pattern\n");
    // for ( i = 1; i <=6; i++)
    // {
    //     for (int j = 1; j <=i ; j++)
    //     {
    //         printf("%d ",i);
    //     }
    //     printf("\n");
    // }
    int rows;
    printf("Multiplication Table\n");
    printf("Enter the rows\n");
    scanf(" %d",&rows);
    for (int i = 1; i <= rows; i++)
    {
        printf("%d : ",i);
        for (int j = 1; j <= rows ; j++)
        {
            printf("%4d ",(i*j));
        }
        printf("\n");
        
        
    }

    
    return 0;
    
}
