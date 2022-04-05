/*
 * @Author: Ray123
 * @Description: 
 * @Date: 2022-04-05 14:35:32
 * @LastEditTime: 2022-04-05 18:00:06
 * @FilePath: \undefinede:\MyApp\MyAdorableCode\1002\1002.c
 */
#include <stdbool.h>
#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>//malloc()


int main()
{
    char input[101];//考虑\0
    gets(input);
    int i=0,sum=0;
    for(;i<strlen(input);i++){
        sum+=input[i]-48;
    }

    char pinyin[10][5]={"ling","yi","er","san","si","wu","liu","qi","ba","jiu"};
    int a[4];//倒序存放sum每个数位（sum最高900）
    int b=0;

    while(sum!=0){
        a[b]=sum%10;
        sum/=10;
        b++;  
    }
    while(b>1){
        b--;
        printf("%s ",pinyin[a[b]]);
    }
    printf("%s",pinyin[a[0]]);

    return 0;
}
