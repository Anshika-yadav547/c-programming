#include<stdio.h>
int main() {
    int num[5];
    printf("\n Run-Time Initialization Example:\n");
    printf("\n Enter array element: ");

    for (int i = 0;i<5;i++) {
        scanf("%d",&num[i]);
    }

    printf("Accessing array element after dynamic initialization: ");

    for(int i = 0;i<5;i++) {
        printf("%d",num[i]);
    }

    return 0;
}