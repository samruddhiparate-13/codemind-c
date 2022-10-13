#include<stdio.h>
int main(){
    int l,b,w,c,a,a1,d;
    scanf("%d%d%d%d",&l,&b,&w,&c);
    a=(l+w+w)*(b+w+w);
    a1=l*b;
    d=a-a1;
    printf("%d",d*c);
}
