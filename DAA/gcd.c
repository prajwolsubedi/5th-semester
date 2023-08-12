#include<stdio.h>

int gcd(int a, int b){
    int remainder, count=0;
       while(b != 0){
        count++;
        remainder = a % b;
        a = b;
        b = remainder;
    }
    printf("The Loop runned %d times \n", count);
    return a;
}

int main(){
    int a, b;
    printf("Enter any two numbers: \n");
    scanf("%d%d", &a, &b);
    printf("The Greatest Common Divisor is %d ", gcd(a,b));
    return 0;
}