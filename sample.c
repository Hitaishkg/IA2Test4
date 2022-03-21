#include<stdio.h>
#include<math.h>
typedef struct rectangle
{
    float x,y;
}rec;
typedef struct point
{
    rec p,q,r;
    float distance,area;
}point;
int input_n(){
    int n;
    printf("Enter number of rectangles to be analyzed\n");
    scanf("%d",&n);
    return n;
}
void input_points(int n, point a[n]){
    for(int i=0;i<n;i++){
        printf("Enter the 3 co-ordinates of %d rectangle\n",i+1);
        scanf("%f %f %f %f %f %f",&a[i].p.x,&a[i].p.y,&a[i].q.x,&a[i].q.y,&a[i].r.x,&a[i].r.y);
    }
}
float distance_two_points(float x1, float y1, float x2, float y2){
    float distance;
    distance=sqrt(((x2-x1)*(x2-x1))+((y2-y1)*(y2-y1)));
    return distance;
}
void distance_n_points(int n , point a[n], float b[n]){
    for(int i=0;i<n;i++){
        a[i].distance=distance_two_points(a[i].q.x,a[i].q.y,a[i].p.x,a[i].p.y);
        b[i]=distance_two_points(a[i].p.x,a[i].p.y,a[i].r.x,a[i].r.y);
    }   
}
void find_area(int n , point a[n], float b[n]){
    for(int i=0;i<n;i++){
        a[i].area=(a[i].distance * b[i]);
    }
}
void output(int n , point a[n]){
    for(int i=0;i<n;i++){
        printf("Area of the rectagle with co-ordinates (%.1f,%.1f),(%.1f,%.1f),(%.1f,%.1f) is %.1f\n",a[i].p.x,a[i].p.y,a[i].q.x,a[i].q.y,a[i].r.x,a[i].r.y,a[i].area);
    }
}
int main(){
    int n;
    n=input_n();
    point a[n];
    float b[n];
    input_points(n,a);
    distance_n_points(n,a,b);
    find_area(n,a,b);
    output(n,a);
    return 0;
}