/*
 * @Author: Ray123
 * @Description: 
 * @Date: 2022-04-07 20:18:17
 * @LastEditTime: 2022-04-08 00:08:02
 * @FilePath: \undefinede:\MyApp\MyAdorableCode\1004\1004.c
 */
#include <stdbool.h>
#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>//malloc()

int main()
{
    int input;
    scanf("%d ",&input);
    int lowest_score=101;
    int highest_score=-1;
    char lowest_name[11];
    char highest_name[11];
    char lowest_id[11];
    char highest_id[11];
    while(input--){
        char name[11],id[11];
        int score;
        scanf("%s %s %d",&name,&id,&score);
        if(score<lowest_score){//�ж�1
            lowest_score=score;
            strcpy(lowest_id,id);
            strcpy(lowest_name,name);
        }
        if(score>highest_score){//�ж�2
            highest_score=score;
            strcpy(highest_id,id);
            strcpy(highest_name,name);
        }
    }
    printf("%s %s\n",highest_name,highest_id);
    printf("%s %s",lowest_name,lowest_id);
    return 0;
}
/* 
scanf()����д&��Ȼ������QAQ
����Ŀ��Ҫ����1������������Ǿ��ǽ���1��ѧ����ô�죿
�ж�1���ж�2����ͬʱ������
*/