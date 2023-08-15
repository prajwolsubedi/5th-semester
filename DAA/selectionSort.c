#include<stdio.h>
int main(){
    int i , j , count=0, innerLoop = 0, swapCount=0, outerLoop = 0, n = 5, temp, mininumIndex, newMinimum=0;
    int arr[5] = {5,4,3,2,1};
    int minNum;
    for(i=0;i<n-1;i++){
        minNum = arr[i];
        outerLoop++;
        for(j=i+1; j<n; j++){
            if(arr[j] < minNum){
                newMinimum = 1;
                minNum = arr[j];
                mininumIndex = j;
            }
            innerLoop++;
        }
        if(newMinimum == 1){
            temp = arr[i];
            arr[i] = arr[mininumIndex];
            arr[mininumIndex] = temp;
            swapCount++;
        }
    }
    for(int z=0; z<n; z++){
        printf("%d \t", arr[z]);
    }
    printf("\n");
    printf("InnerLoop runned %d times \n", innerLoop);
    printf("OuterLoop runned %d times \n", outerLoop);
    printf("Swapped %d times \n", swapCount);
    return 0;
}