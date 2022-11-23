#include <stdio.h>
#include <math.h>

float delta(float a,float b, float c){
    return b*b-4*a*c;
}

void giaiPT(float a,float b, float c){
    float del = delta(a,b,c);
    if (del<0) printf("Vo nghiem");
    else if (del == 0) printf("x = %f",((-b)/(2*a)));
    else printf("x1 = %f\nx2 = %f\n",((-b+sqrt(del))/(2*a)),((-b-sqrt(del))/(2*a)));
}

int main(int argc, char const *argv[])
{
    giaiPT(1,4,1);
    return 0;
}
