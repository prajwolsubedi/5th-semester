#include<stdio.h>

int factorail(int a){
    int fact=1, count = 0;
    for(int i=a; i>=0; i--){
        count++;
        if(i == 0 || i == 1){
            return fact;
        }
        fact = fact * i;
    }
    printf("Loop runned %d times", count);
    return fact;
}

int main(){
    int num;
    printf("Enter any number: \n");
    scanf("%d", &num);
    printf("%d", factorail(num));
    return 0;
}