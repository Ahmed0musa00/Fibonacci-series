#include <stdio.h>

long fibonacci (long );

int main(void)
{
    long num;
    long result;
    printf("Enter the number : ");
    scanf("%ld",&num);

    result=fibonacci(num);
    printf("Fibonacci(%ld) = %ld\n",num,result);
    printf("the golden ratio is : %f\n",((double)result/fibonacci(num-1)));
    return 0;
}

long fibonacci (long n)
{
    if(n==0 || n==1){
            return n;
    }
    else{
        return fibonacci(n-1) + fibonacci(n-2);
    }
}
