int tadd_ok(int x,int y);
int tadd_ok(int x,int y){
    int temp=x+y;
    return !((x>0&&y>0&&temp<=0)||(x<0&&y<0&&temp>=0));
}
