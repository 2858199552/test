#include<stdio.h>
#include<string.h>
int main()
{
  int n, i, h, p, zui;
  scanf("%d", &n);
  int num[10001] = {0};
  for(i = 0; i < n; i++){
    scanf("%d", &h);
    num[h]++;
  }
  p = 0;
  for(i = 1; i < 10001; i++){
    if(num[i] > p){
      p = num[i];
      zui = i;
    }
  }
  printf("%d\n", zui);
  return 0;
}
