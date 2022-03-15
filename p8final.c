#include<stdio.h>
#include<math.h>
typedef struct camel
{
    float radius,height,length,weight;
}camel;
float input_truck_weight(){
    float z;
    printf("Enter the empty weight of the truck\n");
    scanf("%f",&z);
    return z;
}
int input_no_camels(){
    int n;
    printf("Enter the total number of camels in the truck\n");
    scanf("%d",&n);
    return n;
}
void input_camel_details(int n,camel c[n]){
    for(int i=0;i<n;i++){
        printf("Enter the %d camel radius,height,lenght respectively\n",i+1);
        scanf("%f %f %f",&c[i].radius,&c[i].height,&c[i].length);
    }
}
float compute_total_weight(int n, camel c[n], float truck_weight){
    float weight_of_camels=0,total_weight=0;
    for(int i=0;i<n;i++){
         c[i].weight=3.14 * (c[i].radius * c[i].radius * c[i].radius) * sqrt(c[i].height * c[i].length);
    weight_of_camels+=c[i].weight;
    }
    total_weight=weight_of_camels + truck_weight;
    return total_weight;
}
void output(float total_truck_weight){
    printf("The total truck weight is %.2f\n",total_truck_weight);
}
int main(){
    int n;
    float weight_of_truck,total_truck_weight;
    n=input_no_camels();
    weight_of_truck=input_truck_weight();
    camel c[n];
    input_camel_details(n,c);
    total_truck_weight=compute_total_weight(n,c,weight_of_truck);
    output(total_truck_weight);
    return 0;
}