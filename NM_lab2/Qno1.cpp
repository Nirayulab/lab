//Write a program to approximate the functional value at any given x from given n no. of  data using Lagrange’s interpolation

#include<stdio.h>
int main()
{
    float x[100],y[100],a,s=1,t=1,k=0;
    int n,i,j;
    
    printf("\n\nEnter the number of the terms of the table: ");
    scanf("%d",&n);
    
    printf("\n\nEnter the respective values of the variables x and y: \n");
    for(i=0; i<n; i++){
    	printf("x[%d]= ",i);
        scanf ("%f",&x[i]);
        printf("y[%d]= ",i);
        scanf("%f",&y[i]);
    }
    
    printf("\n\nThe table you entered is as follows :\n\n");
    for(i=0; i<n; i++){
    	printf("x%d = ",i);
        printf("%0.3f\t",x[i]);
        printf("y%d = ",i);
        printf("%0.3f\t",y[i]);
        printf("\n");
    }
    
    printf(" \n\n\nEnter the value of the x to find the respective value of y\n");
    printf("x = ");
    scanf("%f",&a);
    for(i=0; i<n; i++){
        s=1;
        t=1;
        for(j=0; j<n; j++){
                if(j!=i){
                    s=s*(a-x[j]);
                    t=t*(x[i]-x[j]);
                }
        }
        k=k+((s/t)*y[i]);
    }
    
    printf("\n\nThe respective value of the variable y is: %f\n\n",k);
    return 0;
}
