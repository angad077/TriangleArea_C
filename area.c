#include <stdio.h>

int main(){
    // HOW TO CALULATE AREA OF TRIANGLE ?
    // WE KNOW THAT AREA OF TRIANGLE IS 1/2*BASE*HEIGHT <-- SO WE PUT THIS FORMULA INTO THIS PROGRAME
    // 1/2 = 0.5 SO I PUT 0.5 IN THIS PROGRAME
    // SO AREA = 0.5 * base * height
    int base , height;
    printf("what is your base \n");
    scanf("%d",&base);
    printf("what is your height \n");
    scanf("%d",&height);
    printf(" area of your triangle is %f \n",0.5 * base * height);
    return 0;
}