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
    scanf("%d ",&input);//scanf()�޷���ȡ�س�
    //%d����ӿո�����س�

    while(input--){
        char s[101];
        gets(s);
        int isright=0;
        int i=0;//�����ò���
        int a=0,b=0,c=0;//����aPbTc
        int P=0,T=0;//P,T���ֵĴ���
        char answer[][4]={"NO","YES"};//���
        for(;i<strlen(s);i++){
            if(s[i]!='P'&&s[i]!='A'&&s[i]!='T'){
                break;
            }//�����޹��ַ������˳�
            switch (s[i])
            {//ͳ��P,T���ִ���
                case 'P':
                    P++;
                    break;
                case 'T':
                    T++;
                    break;
            }
            if(s[i]=='A'&&P==0){
                a++;//Pǰ��A������
            }else if(s[i]=='A'&&P==1&&T==0){
                b++;//P,T�м�A������
            }else if(s[i]=='A'&&P==1&&T==1){
                c++;//T����A������
            }
        }
        if(P!=1||T!=1){//P,T���ҽ���1��
            isright=0;
        }else if(b>0&&c==a*b){
            isright=1;//������Ҫ����
        }
        printf("%s\n",answer[isright]);
    } 
    return 0;
}