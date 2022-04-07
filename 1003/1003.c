/*
 * @Author: Ray123
 * @Description: 
 * @Date: 2022-04-07 13:50:47
 * @LastEditTime: 2022-04-07 13:51:33
 * @FilePath: \undefinede:\MyApp\MyAdorableCode\1003\1003.c
 */
#include <stdbool.h>
#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>//malloc()

int main()
{
    int input;
    scanf("%d ",&input);//scanf()无法读取回车
    //%d后面加空格，清除回车

    while(input--){
        char s[101];
        gets(s);
        int isright=0;
        int i=0;//遍历用参数
        int a=0,b=0,c=0;//形如aPbTc
        int P=0,T=0;//P,T出现的次数
        char answer[][4]={"NO","YES"};//输出
        for(;i<strlen(s);i++){
            if(s[i]!='P'&&s[i]!='A'&&s[i]!='T'){
                break;
            }//发现无关字符立即退出
            switch (s[i])
            {//统计P,T出现次数
                case 'P':
                    P++;
                    break;
                case 'T':
                    T++;
                    break;
            }
            if(s[i]=='A'&&P==0){
                a++;//P前面A的数量
            }else if(s[i]=='A'&&P==1&&T==0){
                b++;//P,T中间A的数量
            }else if(s[i]=='A'&&P==1&&T==1){
                c++;//T后面A的数量
            }
        }
        if(P!=1||T!=1){//P,T有且仅有1个
            isright=0;
        }else if(b>0&&c==a*b){
            isright=1;//两个必要条件
        }
        printf("%s\n",answer[isright]);
    } 
    return 0;
}