//要求：
//1.找出它是多少位数。
//2.分别输出每一位数字。
//3.按反序输出每一位数字。
//例如，原来的号码是321，应该输出123。


#include<stdio.h>
#include<math.h>
int main01()
{
  int num, i, digit = 0;
  scanf("%d", &num);
  int copy_num = num;
  while(num){
    num /= 10;
    digit++;
  }
  printf("digit : %d\n", digit);
  for(int i = digit; i >= 1; i--){
    /*if(i != 0){
      printf(" ");
      }*/
    printf("%d", copy_num / (int)pow(10, i - 1) % 10);
  }//当初想到这个算法的时候，感觉亭有意思的。___/^
  printf("\n");
  //反序同理
  for(int i = 1; i <= digit; i++){
    /*if(i != 0){
      printf(" ");
      }*/
    printf("%d", copy_num / (int)pow(10, i - 1) % 10);
  }
  printf("\n");
  return 0;
}




#include<stdio.h>
#include<string.h>
int main02()
{
  char num[6];
  scanf("%s", num);
  int len = strlen(num);
  printf("%d\n", len);
  for(int i = 0; i < len; i++){
    printf("%c", num[i]);
  }
  printf("\n");
  for(int i = len - 1; i >= 0; i--){
    printf("%c", num[i]);
  }
  printf("\n");
  return 0;
}
