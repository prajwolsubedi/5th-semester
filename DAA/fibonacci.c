#include<stdio.h>
int fibonacciSeries(int a){
    int firstFibonacciTerm, secondFibonacciTerm, count=0, newFibonacciTerm;
    firstFibonacciTerm = 0;
    secondFibonacciTerm = 1;
    printf("The sequence upto %d  term is \n", a);
    printf("%d \t %d \t", 0, 1);
    while(a > 2){
        newFibonacciTerm = firstFibonacciTerm + secondFibonacciTerm;
        printf("%d \t", newFibonacciTerm);
        firstFibonacciTerm = secondFibonacciTerm;
        secondFibonacciTerm = newFibonacciTerm;
        count++;
        a--;
    }
    printf("\n Loop runned %d times", count);
    return 0;
}
int main(){
    fibonacciSeries(10);
    return 0;
}