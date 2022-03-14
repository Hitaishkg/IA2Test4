#include<stdio.h>
void input(int n, int a[n]){
    int i;
    for(i=0;i<n;i++){
        printf("Enter the %d value of the array\n",i+1);
        scanf("%d",&a[i]);
    }
}
void bubble_sort(int n,int a[n]){
    int temp;
    int counter=1;
    while (counter<n){
        for(int i=0;i<n-counter;i++){
            if(a[i]>a[i+1]){
               temp=a[i];
               a[i]=a[i+1];
               a[i+1]=temp;     
            }
        }
        counter++; 
    }
}
void output(int n,int a[n]){
    printf("The sorted array is\n");
    for(int i=0;i<n;i++){
        printf("%d ",a[i]);
    }
}
int main(){
    int n;
    printf("Enter number of elements in the array\n");
    scanf("%d",&n);
    int a[n];
    input(n,a);
    bubble_sort(n,a);
    output(n,a);
    return 0;
}