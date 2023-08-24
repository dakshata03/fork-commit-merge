// C - Easy

#include <stdio.h>

// TODO: Implement the sum function
int sum(int a, int b) {
    if (b == 0) {
        return a;
    } else {
        int carry = (a & b) << 1;
        int add = a ^ b;
        return sum(add, carry);
    }
}
int main() {
    // TODO: Implement the main function
    int x,y;
    printf("enter num:");
    scanf("%d %d",&x,&y);
    int r=sum(x,y);
    printf(" \n sum is : %d",r);

    return 0;
}
