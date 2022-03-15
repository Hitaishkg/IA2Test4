#include<stdio.h>
#include<math.h>
int input(){
    int x;
    printf("Enter the value of x\n");
    scanf("%d",&x);
    return x;
}
int fact(int n){
    int factorial=1;
    int i;
    for( i=2;i<=n;i++){
    factorial*=i;
    }
    return factorial;
}
float calculate(int x,int n){
    float cal;
    for(int i=1;i<=n;i++){
        cal=cal+(pow(x,i)/fact(i+2));  
    }
    return cal;
}
void output(float cal){
    printf("The borga^x is %.2f",cal);
}
int main(){
    int x,n=3;
    float cal;
    x=input();
    cal=calculate(x,n);
    output(cal);
    return 0;
}
