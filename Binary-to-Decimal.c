#include<stdio.h>
#include<math.h>
int main()

{
    int num,i=0,remainder,base=2,sum=0;
    printf("Enter Binary number: ");
    scanf("%d",&num);
    while(num>0)
    {
        remainder=num%10; // extract last digit
        sum = sum + remainder*pow(base,i);   //multiply by 2^i
        num = num/10;        //remove last digit
        i++;                //increment power
    }
    printf("Decimal equivalent: %d\n",sum);
    return 0;
}