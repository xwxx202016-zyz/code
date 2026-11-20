#include<stdio.h>
#include<conio.h>
int main(void) {
	int n;
	printf("请输入一个大于0的整数\n");
	scanf("%d",&n);
	while(n!=1){
		if(n%2==0){
			n/=2;
		}
		else{
			n=n*3+1;	
		}
		printf("%d ",n);	
	}
	printf("\n\n	按任意键退出");
	while(1){ 
		if(_kbhit()){
		break;
		}
	}
	return 0;
}
