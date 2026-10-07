#include<stdio.h>
// if there is an invalid input the out will be empty 
int Count(int start, int end) {
    int count=0;
    if(start>1) {
        for(int i=start; i<=end; i++) {
            int isprime=1;
            for(int j=2; j<i; j++) {
                if(i%j==0) {
                    isprime=0;
                }
            }
            if(isprime==1) {
                count++;
            }
        }
        return count;
    } else {
        for(int i=2; i<=end; i++) {
            int isprime=1;
            for(int j=2; j<i; j++) {
                if(i%j==0) {
                    isprime=0;
                }
            }
            if(isprime==1) {
                count++;
            }
        }
        return count;
    }
}
int smallest(int start, int end) {
    for(int i=start; i<=end; i++) {
        int count=0;
        for(int j=1; j<=i; j++) {
            if(i%j==0) {
                count++;
            }
        }
        if(count==2) {
            return i;
        }
    }
}
int largest(int start, int end) {
    int largest=start;
    for(int i=start; i<=end; i++) {
        int count=0;
        for(int j=1; j<=i; j++) {
            if(i%j==0) {
                count++;
            }
        }
        if(count==2) {
            largest=i;
        }
    }
    return largest;
}
int main() {
    // input : starting number and ending number
    // output : prime numbers in range, count, smallest prime, largest prime
    int start, end, prime;
    printf("start: ");
    scanf("%d", &start);
    printf("end: ");
    scanf("%d", &end);
    printf("\nRange: %d - %d\n\n", start, end);
    printf("Primes: ");
    if(start<0 && end<0) {
        printf("0");
    } else if(start>1) {
        for(int i=start; i<=end; i++) {
            int count=0;
            for(int j=1; j<=i; j++) {
                if(i%j==0) {
                    count++;
                }
            }
            if(count==2) {
                printf("%d ", i);
            }
        }
    } else if(start<2) {
        for(int i=2; i<=end; i++) {
            int count=0;
            for(int j=1; j<=i; j++) {
                if(i%j==0) {
                    count++;
                }
            }
            if(count==2) {
                printf("%d ", i);
            }
        }
    } else {
        printf("0\n");
    }
    printf("\nCount: %d\n", Count(start, end));
    if(start<0 && end<0) {
        printf("smallest: ");
    } else if(start>1) {
        int x=smallest(start, end);
        if(x>0) {
            printf("smallest: %d", x);
        } else {
            printf("smallest: ");
        }
    } else if(start<2) {
        if(end>1) {
            printf("smallest: 2");
        } else {
            printf("smallest: ");
        }
    } else {
        printf("smallest: ");
    }
    printf("\n");
    if(start<2 && end<2) {
        printf("largest: ");
    } else if(start>end) {
        printf("largest: ");
    } else if(start>1) {
        int large=largest(start, end);
        printf("largest: %d", large);
    } else {
        printf("largest: ");
    }
    return 0;
    }