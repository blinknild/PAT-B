/*
 * @Author: Ray123
 * @Description: 
 * @Date: 2022-04-05 13:50:19
 * @LastEditTime: 2022-04-05 13:50:19
 * @FilePath: \undefinedc:\Users\11518\Desktop\1001\1001.c
 */

#include <stdbool.h>
#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>//malloc()


int main()
{
    int input,count=0;
    scanf("%d",&input);

    while(input!=1){
        if(input%2==0){
            input/=2;
            count++;
        }else{
            input=(3*input+1)/2;
            count++;
        }
    }

    printf("%d",count);
    return 0;
}