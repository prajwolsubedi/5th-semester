#include<stdio.h>
int main(){
    int i, j, innerLoop=0,n=5, temp, outerLoop = 0;
    int arr[5] = {1,2,3,4,5};

    for(i=0; i<n-1; i++){
        outerLoop++;
        for(j=i+1; j>0; j--){
            if(arr[j] < arr[j-1]){
                temp = arr[j];
                arr[j] = arr[j-1];
                arr[j-1] = temp;
                innerLoop += 1;
            }
            else{
                break;
            }
        }
    }
    for(int z=0; z<n; z++){
        printf("%d \t", arr[z]);
    }
    printf("\n");
    printf("Inner loop runned %d times \n", innerLoop);
    printf("Outer loop runned %d times \n", outerLoop);
    return 0;
}