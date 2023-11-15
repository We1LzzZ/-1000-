#include<stdio.h>
#include<math.h>
int main()

{
	int x,y;
    printf("输入一个小于1000的数x=");
    scanf("%d",&x);
	if(x<1000)
	{
		x=sqrt(x);
	    printf("它的平方根y=%d\n",x);
	}
	else 
	{
		do
	{
		printf("重新输入x=");
        scanf("%d",&x);
	}
	while(x>1000);
        x=sqrt(x);
		printf("它的平方根y=%d\n",x);
	}

	return 0;

}