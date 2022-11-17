#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    int star = n/2, space;
    // top part 
    while(star <= n){
        space = (n-star)/2;
        int cnt = space;
        while(cnt > 0){
            printf(" ");
            cnt--;
        }
        cnt = star;
        while(cnt > 0){
            printf("*");
            cnt--;
        }
        cnt = 2*space;
        while(cnt > 0){
            printf(" ");
            cnt--;
        }
        if(n % 4 == 1 || n % 4 == 2){
            printf("  ");
        }
        cnt = star;
        while(cnt > 0){
            printf("*");
            cnt--;
        }
        cnt = space;
        while(cnt > 0){
            printf(" ");
            cnt--;
        }
        printf("\n");
        star += 2;
    } 
    // bottom part 
    int i = 0;
    while(i < n){
        int cnt = i;
        while(cnt > 0){
            printf(" ");
            cnt--;
        }
        cnt = 2*n-(2*i+1);
        while(cnt > 0){
            printf("*");
            cnt--;
        }
        i++;
        printf("\n");
    }         
}