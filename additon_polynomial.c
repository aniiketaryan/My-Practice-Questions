#include<stdio.h>
#include<math.h>
float a[50],b[50],c[50],d[50];
int main()
{
    int i;
    int deg1;
    int deg2;
    int k=0,l=0,m=0;
    printf("ENTER THE HIGHEST DEGREE OF POLYNOMIAL1: ");
    scanf("%d",&deg1);
    for(i=0;i<=deg1;i++){
        printf("\nENTER THE COEFFICIENT OF X^%d: ",i);
        scanf("%f",&a[i]);
        }
    for(i=0;i<=deg2;i++){
            printf("ENTER THE HIGHEST DEGREE OF POLYNOMIAL2: ");
            scanf("%d",&deg2);
            for(i=0;i<=deg2;i++){
                printf("\nENTER THE COEFFICIENT OF X^%d: ",i);
                scanf("%f",&b[i]);
            }
        printf("\nPOLYNOMIAL 1= %.1f",a[0]);
        for(i=1;i<=deg1;i++){
            printf("+%.1fx^%d",a[i],i);
        }
         printf("\nPOLYNOMIAL 2= %.1f",b[0]);
        for(i=1;i<=deg2;i++){
            printf("+%.1fx^%d",b[i],i);
        if(deg1>deg2){
            for(i=0;i<deg2;i++){
                c[m]=a[i] + b[i];
                m++;
            }
        }
        }
    }
    
    return 0;
}