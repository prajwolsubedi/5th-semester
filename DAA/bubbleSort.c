#include<stdio.h>
int main(){
    int i,j,innerLoop=0, outerLoop=0, count=0,n=5, temp, swapCount = 0;
    int arr[5] = {5,4,3,2,1};
    for(i=0; i<n-1; i++){
        outerLoop++;
        for(j=1; j<n-i; j++){
            if(arr[j-1] > arr[j]){
                temp = arr[j-1];
                arr[j-1] = arr[j];
                arr[j] = temp;
                count++;
                innerLoop++;
                swapCount++;
            }
        }
        if(count == 0){
            printf("The array is already sorted \n");
            break;
        }
    }

    for(i=0; i<n; i++){
        printf("%d \t", arr[i]);
    }
    printf("\n");
    printf("InnerLoop runned %d times \n", innerLoop);
    printf("OuterLoop runned %d times \n", outerLoop);
    printf("Swapped %d times \n", swapCount);

    return 0;
}