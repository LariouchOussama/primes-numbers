#include<stdio.h>
//the function that test the number
int isprime(int n){
    for (int i=2;i<=n/2;i++)
    if(!(n%i))
        return 0;
    return 1;
}

void main(){
    int numP=0;//numP is the total number of primes number
    for(int i=2;i<1000000;i++){
        numP+=isprime(i);
        if (isprime(i)==1){
            printf("%d\n",i);//printing the prime number
        }
        
    }
      
    printf("The total of numbers are :%d\n",numP);//printing the total number
}