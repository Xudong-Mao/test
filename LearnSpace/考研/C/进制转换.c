# include <stdio.h>

// 二进制转十六进制 四位为一个单位
// 二进制转八进制 三位为一个单位
// X86架构是小端存储 32位
// 1位 1bit （0&1）
// 一个字节byte 8位
// 查看的时候是16进制看方便，两个字符表示一个字节
// int 4字节,float 
// 一个字符占有一个字节
int main(){
    int c;
    scanf("%d",&c);
    printf("%c\n",c);
}