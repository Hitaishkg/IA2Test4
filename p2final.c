#include<stdio.h>
#include<math.h>
typedef struct camel
{
    float radius,height,length,weight;
}camel;
camel input(){
    camel c;
    printf("Enter the radius of the stomach of the canmel\n");
    scanf("%f",&c.radius);
    printf("Enter the height of the camel\n");
    scanf("%f",&c.height);
    printf("Enter the length of the camel\n");
    scanf("%f",&c.length);
    return c;
}
void find_weight(camel *c){
    c->weight=3.14 * (c->radius * c->radius * c->radius) * sqrt(c->height * c->length);
    printf("%.2f\n",c->weight);
}
void output(camel c){
    printf("The weight of the camel is %.2f",c.weight);
}
int main(){
    camel c; 
    c=input();
    find_weight(&c);
    printf("%.2f %.2f %.2f %.2f\n",c.height,c.length,c.radius,c.weight);
    output(c);
    return 0;
}
