#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    int star = n/2, space;
    while(star <= n){
        space = (n-star)/2;
        int cnt = space;
        while(cnt > 0){
            printf(" ");
            cnt--;
        }
    }    
}