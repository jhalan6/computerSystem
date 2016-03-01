int gotodiff(int x,int y){
    int result;
    if (x<y)
        goto truth;
    result=x-y;
    goto done;
truth:
    result=y-x;
done:
    return result;
}
/**
 * 两种表示方法在大多数情况下是完全相同的，仅仅是在没有else的情况下，
 * 第一个版本更容易简化
 */
