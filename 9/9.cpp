#include <stdio.h>
int main()
{
int n;
scanf("%d",&n);
if(n%3==0&&n%5==0)
printf("%d能被3和5整除\n",n);

else
printf("%不能被3或5整除\n");
return 0;
}