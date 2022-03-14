#include<stdio.h>
#include<string.h>
void input(char *s){
    printf("Enter the Name \n");
    scanf("%s",s);
}
int  is_name_nice(char *s){
    int is_nice=0,vowel=0,consonent=0;
    for(int i=0;s[i]!='\0';++i){
        if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'){
            ++vowel;
        }
        else{
            ++consonent;
        }
    }
    if(vowel>=2 && consonent>=2){
        is_nice=1;
    }
    else{
        is_nice=-1;
    }
    return is_nice;

}
void print_name(char *s,int is_nice){
    printf("The name %s is",s);
    if(is_nice==1){
        printf(" nice\n");
    }
    else if(is_nice==-1){
        printf(" not nice\n");
    }
}
int main(){
    char s;
    int is_nice;
    input(&s);//hitaish
    is_nice=is_name_nice(&s);
    print_name(&s,is_nice);
    return 0;
}