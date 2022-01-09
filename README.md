# primes-numbers
testing how many primes numbers between 0 and 1000000 and printing all the primes numbers in 00:03:54 with C


#The code 
---------------------------------------------------------------------------------------------------------------------------------------

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


------------------------------------------------------------------------------------------------------------------------------------------

#output
...
...
...
999863
999883
999907
999917
999931
999953
999959
999961
999979
999983
The total of numbers are :78498
