#include <stdio.h>
int gcd(int a,int b){
    if(a==0) return b;
    if(b==0) return a;
    return gcd(b,a%b);
}
int main(){
    int a=68,b=51;
    int ans=gcd(a,b);
    printf("%d",ans);
}
