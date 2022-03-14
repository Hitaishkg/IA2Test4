#include<stdio.h>
void input(int n,int a[n]){
    int i;
    for(i=0;i<n;i++){
        printf("Enter the %d element of the array\n",i+1);
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
int binary_search(int n,int a[n],int key){
    int s=0,e=n;
    while(s<=e){
    int mid=(e+s)/2;
    if(a[mid]==key){
        return mid;
    }
    else if(a[mid]>key){
        e=mid -1;
    }
    else {s=mid+1;}
}
    return -1;
}
void print_position(int n, int a[n], int key, int position){
    
    printf("The position of the key %d in the array\n",key);
    for(int i =0;i<n;i++){
        printf(" %d ",a[i]);
    }
    printf(" is %d",position);
    
}
int main(){
    int n,key,position;
    printf("Enter number of elements in the array\n");
    scanf("%d",&n);
    printf("Enter the value of key\n");
    scanf("%d",&key);
    int a[n];
    input(n,a);
    bubble_sort(n,a);
    position=binary_search(n,a,key);
    print_position(n,a,key,position);
    return 0;

    
}