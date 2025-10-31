#include<stdio.h>
#include<math.h>

int main(){
	float a,b,c;

	printf("请输入三角形三条边：\n");
	printf("边a：");
	scanf("%f",&a);
	printf("边b：");
	scanf("%f",&b);
	printf("边c：");
	scanf("%f",&c);

//检查是否为三角形
	if(a+b>c&&a+c>b&&b+c>a&&a>0&&b>0&&c>0){
		printf("\n三角形类型：");

		if(a==b&&b==c){ 
			printf("等边三角形");//类型1
		}
		else if(a==b||a==c||b==c){
			printf("等腰三角形");//类型2
	   if(a*a+b*b==c*c||b*b+c*c==a*a||a*a+c*c==b*b){
    printf("等腰直角三角形");
    }
	}
		  else if (a*a+b*b==c*c||b*b+c*c==a*a||a*a+c*c==b*b){
		       printf("直角三角形");//类型3
		}
		else {
			printf("其他三角形");//类型4
		}

		float p=(a+b+c)/2;
		float area = sqrt(p*(p-a)*(p-b)*(p-c));

		printf("\n三角形面积：%.2f\n",area);
	}else{
		printf("\n错误：输入三条边不能构成三角形。\n");
	}
	return 0;
		}
	
