# include <stdio.h>
//某人想将手中的一张面值100元的人民币换成10元、5元、2元和1元面值的票子 82
//要求换正好40张，且每种票子至少一张。问：有几种换法？

int main(){
    int n = 0;
    int a,b,c,d = 0;
    for (a=1;a<7;a++){
        for (b=1;b<20;b++){
            for (c=1;c<40;c++){
                for (d=1;d<40;d++){
                    if(a*10+b*5+c*2+d==100 && a+b+c+d==40){
                        n ++;
                    }
                }
            }
        }
    }
printf("%d\n",n);
}