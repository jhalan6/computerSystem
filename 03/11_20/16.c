void cond(int a,int *p)
{
    if(p==0)
        goto done;
    a=0;
    if (a<=0)
        goto done;
    *p+=a;    
done:
        return;
}
/**
 *在C语言描述中，一个if语句中含有两个部分，这两个部分是且的关系，所以要对两个部分都进行判断
 */
