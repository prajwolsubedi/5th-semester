#include<stdio.h>

int sequentialSearch (int arr[], int num, int length){
    int count = 0, found = 0;
    for(int i=0; i<length; i++){  
        count++;
        if(arr[i] == num){
            printf("Element found at position %d \n", i+1);
            found = 1;
            break;
        }
    }  
    if(found == 0)
        printf("Element not found in the array \n"); 

    printf("Looped runned %d times", count);

    return 0;
}

int main(){
    int size, arr[10], number;
    printf("Enter the size of an array \n");
    scanf("%d", &size);

    printf("Enter the elements of array \n");
    for(int i=0; i<size; i++){
        scanf("%d", &arr[i]);
    }

    printf("Enter the number you want to find \n");
    scanf("%d", &number);

    sequentialSearch(arr, number, size);
    return 0;
}