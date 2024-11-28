#include<stdio.h>
#include<string.h>
int main(){
    char s1[] = "SRM University";
    char s2[] = "University";
    char* p;

    p = strstr(s1, s2);

    if(p){
        printf("Substring found at index: %d\n", p - s1);
    }
    else{
        printf("Substring not found.\n");
    }
}