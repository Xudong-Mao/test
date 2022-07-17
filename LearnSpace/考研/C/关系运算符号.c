# include <stdio.h>
# include <stdlib.h>
// c没有布尔值，c语言认为一切非零值都是真
// 判断浮点数是否等于某个值
// 关系运算符不能连写，例如3<a<10，应该用逻辑运算符拼接，避免短路效应
// 逻辑运算符逻辑非！逻辑与&&(任何一个为假就是假，两个真才为真) 逻辑或||（）按位与& ^ 按位异或 按位或 |
// 优先级：算数运算符 > 关系运算符 > 逻辑运算符
// 逻辑表达式的值只有真和假，对应的值为1和0
// 逻辑非!等级很高为单目运算符
int main()
{
    int a;
    scanf("%d",&a);
    if(3<a && a<10){
        printf("a is right!\n");
    }else{
        printf("a is wrong!\n");
    }
    // 两个判断浮点数是否相等，必须用下面的方法，使用减法，浮点数有效位数7位
    float f = 234.56; // 内存里面是两个数相乘近似求得
    if (f - 234.56 > -0.0001 && f - 234.56 < 0.0001){
        printf("f is equle 234.56.\n");
    }else{
        printf("f is not equle 234.56.\n");

    }
    return 0;
}