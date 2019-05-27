

#include <stdio.h>


    int max(int ,int );
  int main()
{  
int a=600,b=800;
int maxval = max(a,b);
printf("max is:%d",maxval);
    return 0;
}
int max(int x, int y)
{
    return x>y ? x:y;
}
