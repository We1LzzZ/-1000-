#include<stdio.h>
#include<math.h>
int main()

{
	int x,y;
    printf("����һ��С��1000����x=");
    scanf("%d",&x);
	if(x<1000)
	{
		x=sqrt(x);
	    printf("����ƽ����y=%d\n",x);
	}
	else 
	{
		do
	{
		printf("��������x=");
        scanf("%d",&x);
	}
	while(x>1000);
        x=sqrt(x);
		printf("����ƽ����y=%d\n",x);
	}

	return 0;

}