int arith(int x,int y,int z);
int arith(int x,int y,int z){
    int t1=y;
    int t2=x^t1;
    int t3=~(t2>>3);
    int t4=t3-z;
    return t4;
}
----------->
int arith(int x,int y,int z){
    int t1=x^y;
    int t2=t1>>3;
    int t3=~t2;
    int t4=t3-z;
    return t4;
}
