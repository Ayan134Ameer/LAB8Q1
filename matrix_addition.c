#include <stdio.h>
int main(){
    int arr[3][3]= {{12,45,30},{2,13,45},{36,72,41}}; //Addition
    int arr2[3][3] = {{34,32,12},{56,75,32},{1,2,3}};
    int Result[3][3] = {{0,0,0},{0,0,0},{0,0,0}};
    for (int i = 0; i <= 2; i++)
    {
        for (int j = 0; j <=2 ; j++)
        {
            Result[i][j] = arr[i][j]+arr2[i][j];
        }
        
    }
    return 0;
}