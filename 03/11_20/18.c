int test(int x,int y){
    int val =x*y;
    if (x>=-3){
        if(x>2)
            val=x-y;
        else
            val=x^y;
    } else if(x<=y)
        val=x+y;
        return val;
}
//--------------->
int test_answer(int x,int y){
    int val=x^y;
    if(x<-3){
        if(y<x)
            val=x*y;
        else
            val=x+y;
    }else if(x>2)
        val=x-y;
    return val;
}
