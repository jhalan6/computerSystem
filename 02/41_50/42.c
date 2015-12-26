int div16(int arg){
    //利用arg的最高位的0/1标记是否需要补16
    return (arg+((arg>>31)&0xF)>>4);
}
