#include<stdio.h>
typedef struct camel
{
    float radius,height,length,weight;
    int mood;
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
}
void find_mood(camel *c){
    if(c->radius<c->height&&c->radius<c->length){
        c->mood=0;
    }
    else if(c->height < c->length && c->height < c->radius){
        c->mood=1;
    }
    else if(c->length<c->height && c->length<c->radius){
        c->mood=2;
    }
}
void output(camel c){
    printf("The mood of the camle is ");
    if(c.mood==0){
        printf(" Sick");
    }
    else if(c.mood==1){
        printf(" happy");
    }
    else if(c.mood==2){
        printf(" tense");
    }
}
int main(){
    camel c;
    c=input();
    find_mood(&c);
    output(c);
    return 0;
}