#include<stdio.h>
int tmult_ok(int x,int y);
int tmult_ok(int x,int y){
    long long l=(long long)x*y;
    return l==(int)l;
}
int main(){
    printf("%d\n",tmult_ok(1205753191,1205753191));   
    printf("%d\n",tmult_ok(120,120));   
}
