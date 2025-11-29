#include <stdio.h>
int main()
{
	int a[7] = {8,7,6,3,2,1};//留下一个空位 
	int set = 6;//定义空位,默认插入最后一位 
	int t;
	
	printf("输入一个整数：");
	scanf("%d",&t);
	printf("原数组：\n");
	for(int i = 0; i <= 5; i++){
		printf("%d",a[i]);
	}
	for(int i = 0; i <= 5; i++) {
		if(t > a[i]){
		set = i;//记录插入位置 
		break; 
		}
	}
	 for(int j = 6; j > set; j--){
	 	a[j] = a[j-1];
	 }
	 a[set] = t;
	 
	 //屏幕显示新数组 
	 printf("\n新数组：\n");
	 for(int k = 0; k <= 5+1; k++)
	{
		 printf("%d",a[k]);
	}
return 0;	 
 } 
 
