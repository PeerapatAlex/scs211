#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*int main(){
    float depth,c,f;
    printf("Enter a depth\n");
    scanf("%f",&depth);
    c=10*depth+20;
    f=1.8*c+32;

    printf("Temperature in C :%.3f\n",c);
    printf("Temperature in F%.3f",f);
}*/
 
 /*int main(){
    float amout,rate,y1,y2,y3;
    printf("Enter a amont\n");
    scanf("%f",&amout);
    printf("Enter a rate\n");
    scanf("%f",&rate);

    y1=amout*(rate/100);
    y2=(amout+y1)*(rate/100);
    y3=(amout+y1+y2)*(rate/100);

    printf("Interest (Year 1) :%.4f\n",y1);
    printf("Interest (Year 2) :%.4f\n",y2);
    printf("Interest (Year 3) :%.4f\n",y3);
 }*/
 /*int main(){
    int l1,w1,l2,w2,time,g; 
    printf("Enter the length of a yard\n");
    scanf("%d",&l1);
    printf("Enter the width of a yard\n");
    scanf("%d",&w1);
    printf("Enter the length of a house\n");
    scanf("%d",&l2);
    printf("Enter the width of a house\n");
    scanf("%d",&w2);

    g=(l1*w1)-(l2*w2);
    time=g/2;


    printf("The time required is :%d\n",time);
    
 }*/

/*int main(){
    float x,y,sum;
     printf("Enter a value for x\n");
    scanf("%f",&x);
    printf("Enter a value for y\n");
    scanf("%f",&y);

    sum=x-(y*y);
    
    printf ("The result is %f",(-sum)+0);
    
}*/

/*int main(){
    float f;
    printf ("Enter a temperature in F");
    scanf ("%f",&f);
    printf("Temperature in F %f",f);
    printf("Temperature in c %f",(f-32)/1.8);
}*/

int main (){
    float a,b,c,result,e=2.71828;
    printf ("Enter a value for a");
    scanf ("%f",&a);
    printf ("Enter a value for b");
    scanf ("%f",&b);
    printf ("Enter a value for c");
    scanf ("%f",&c);

    
    result=a+((b*c)+b)+(e*e);
    
    printf("The result is%f\n",result);



}
