int uadd_ok(unsigned x,unsigned y);
int uadd_ok(unsigned x,unsigned y){
    unsigned temp=x+y;
    return temp>x&&temp>y;//answer: return temp>x;
}
//如果产生了溢出，则和会小于任何一个操作数。
