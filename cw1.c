#include<stdio.h>
int main()
{
    int x; 
    scanf("%d", &x);
    
    if((x%2==0) && (x%3==0) && (x%5==0) && (x%7==0)){
        printf("%d is divisible by 2, 3, 5 & 7\n", x);
    }
    else if((x%2==0) && (x%3==0) && (x%5==0) && (x%7!=0)){
        printf("%d is divisible by 2, 3 & 5\n", x);
    }
    else if((x%2==0) && (x%3==0) && (x%5!=0) && (x%7==0)){
        printf("%d is divisible by 2, 3 & 7\n", x);
    }
    else if((x%2==0) && (x%3!=0) && (x%5==0) && (x%7==0)){
        printf("%d is divisible by 2, 5 & 7\n", x);
    }
    else if((x%2!=0) && (x%3==0) && (x%5==0) && (x%7==0)){
        printf("%d is divisible by 3, 5 & 7\n", x);
    }
    else if((x%2==0) && (x%3==0) && (x%5==0) && (x%7==0)){
        printf("%d is divisible by 2, 3 & 5\n", x);
    }
    else if((x%2==0) && (x%3==0) && (x%5!=0) && (x%7!=0)){
        printf("%d is divisible by 2 & 3\n", x);
    }
    else if((x%2==0) && (x%3!=0) && (x%5==0) && (x%7!=0)){
        printf("%d is divisible by 2 & 5\n", x);
    }
    else if((x%2==0) && (x%3!=0) && (x%5!=0) && (x%7==0)){
        printf("%d is divisible by 2 & 7\n", x);
    }
    else if((x%2!=0) && (x%3==0) && (x%5==0) && (x%7!=0)){
        printf("%d is divisible by 3 & 5\n", x);
    }
    else if((x%2!=0) && (x%3==0) && (x%5!=0) && (x%7==0)){
        printf("%d is divisible by 3 & 7\n", x);
    }
    else if((x%2==0) && (x%3==0) && (x%5!=0) && (x%7!=0)){
        printf("%d is divisible by 2 & 3\n", x);
    }
    else if((x%2!=0) && (x%3!=0) && (x%5==0) && (x%7==0)){
        printf("%d is divisible by 5 & 7\n", x);
    }
    else if((x%2==0) && (x%3!=0) && (x%5!=0) && (x%7!=0)){
        printf("%d is divisible by 2\n", x);
    }
    else if((x%2!=0) && (x%3==0) && (x%5!=0) && (x%7!=0)){
        printf("%d is divisible by 3\n", x);
    }
    else if((x%2!=0) && (x%3!=0) && (x%5==0) && (x%7!=0)){
        printf("%d is divisible by 5\n", x);
    }
    else if((x%2!=0) && (x%3!=0) && (x%5!=0) && (x%7==0)){
        printf("%d is divisible by 7\n", x);
    }
    else{
        printf("%d is not divisible by any of them!", x);
    }

    return 0;    

}