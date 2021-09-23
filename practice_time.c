# include<stdio.h>
# include<conio.h>

int main()
{
    float a,b,c;
    printf("Enter two numbers which can \nbe up to 6 decimal places:-\n");
    scanf("%f",&a);
    scanf("%f",&b);
    c=a-b;
    printf("%f - %f = %f",a,b,c);
    return 0;
}