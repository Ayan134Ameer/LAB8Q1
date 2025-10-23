#include <stdio.h>
int main(){
    int Array[3][3] = {{12,45,32},{2,13,101},{56,72,100}}; //Max value finder
    int max = Array[0][0];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (Array[i][j]>=max)
            {
                max = Array[i][j];
            }
            
        }
        
    }
    printf("The max array of the array is %d",max);
    return 0;
    
}
