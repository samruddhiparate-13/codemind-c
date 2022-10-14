#include<stdio.h>
int main(){
    int n,c=0,m=0,i,j;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(i=0; i<n ;i++) {
        c = 1;
        for(j=0; j<n; j++) {
            if(i!=j && a[i]==a[j])
                c += 1;
        }
        if(c==1){
            m=a[i];
        }
    }
    printf("%d",m);
}