#include <stdio.h>
int x = 0;
int main()
{
  printf("hello :\n%d\n", ++x);
  printf("you can change next perpor's [ x ]!!\n");
  while(scanf("%d", &x) != EOF){
    if(x < 0){
      return 0;
    }
  }
  return 0;
}
