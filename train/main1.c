#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/*int main(){
    //DECLARE
    float degree,radian;
    float s,c,t;
    
    //INPUT
    printf("Enter an angle (in degree): ");
    scanf("%f",&degree);
    
    //PROCESS
    radian = degree * 3.14159 / 180;
    s = sin(radian);
    c = cos(radian);
    t = tan(radian);
    
    //OUTPUT
    printf("Sine of 45 degree is %.4f \n" , s);
    printf("Cosine of 45 degree is %.4f \n" , c);
    printf("Tangent of 45 degree is %.4f \n" , t);
}*/

/*int main(){
    //DECLARE
    float x1,y1,x2,y2,d;
    
    //INPUT
    printf("Enter the first point:");
    scanf("%f %f", &x1, &y1);
    printf("Enter the second point:");
    scanf("%f %f", &x2, &y2);
    
    //PROCESS
    d = sqrt((pow(x1-x2,2)) + pow(y1-y2,2));
    
    //OUTPUT  
    printf("The distance between (%.0f,%.0f) and (%.0f,%.0f) is %.2f \n", x1,y1,x2,y2,d);    
}*/

/*int main(){
    //DECLARE
    float length, T;
    
    //INPUT
    printf("Enter the length (L) of a pendulum in meter:");
    scanf("%f",&length);
    
    //PROCESS
    T = 2 * 3.14159 * sqrt( length / 9.81);
    
    //OUTPUT
    printf("Period (T): %.1f sec", T); 
}*/
int main(){
    float depth,c,f;
    printf("Enter a depth\n");
    scanf("%f",&depth);
    c=10*depth+20;
    f=1.8*c+32;

    printf("Temperature in C :%.3f\n",c);
    printf("Temperature in F%.3f",f);
  }
