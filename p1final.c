#include<stdio.h>
#include<math.h>
float input_radius(){
    float n;
    printf("Enter the radius of stomach of the camel\n");
    scanf("%f",&n);
    return n;
}
float input_height(){
    float n;
    printf("Enter the height of the camel\n");
    scanf("%f",&n);
    return n;
}
float input_length(){
    float n;
    printf("Enter the length of the camel\n");
    scanf("%f",&n);
    return n;
}
float find_weight(float radius,float height,float length){
    float weight;
    weight=3.14 * (radius*radius*radius) * sqrt(height * length);
    return weight;
}
void output(float radius, float height, float length, float weight){
    printf("The weight of the camel is %.2f",weight);
}
int main(){
    float radius,height,length,weight;
    radius=input_radius();
    height=input_height();
    length=input_length();
    weight=find_weight(radius,height,length);
    output(radius,height,length,weight);
    return 0;


}