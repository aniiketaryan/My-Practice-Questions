#include<stdio.h>
void swapnumbers(int x , int y){
    int temp;
    temp = x;
    x = y;
    y = temp;
    printf("THE NUMBERS AFTER SWAPPING ARE: %d and %d",x,y);


}
int main(){
    int a,b, temp;
    printf("ENTER FIRST NUMBER: ");
    scanf("%d",&a);
    printf("ENTER THE SECOND NUMBER:");
    scanf("%d",&b);
    swapnumbers(a,b);
   
 return 0; 
}
