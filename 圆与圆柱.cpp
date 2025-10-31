#include <stdio.h>
#include<math.h>
#define PI 3.1416		//定义圆周率常量
 int main()
{
   float r, h;  		   	 //圆的半径和圆柱的高
   float circumference;	     //圆周长
   float circle_area;		  //圆面积
   float sphere_surface;  	 //圆球表面积
   float sphere_volume;	     //圆球体积
   float cylinder_volume;	 //圆柱体积
    
   //输入半径和高
     printf("请输入圆的半径和圆柱的高：");
     scanf("%f %f",&r,&h);

   //计算各值
   circumference = 2 * PI * r;			//圆周长
   circle_area = PI * r * r;			//圆面积
   sphere_surface =4*PI *r*r;			//圆球表面积
   sphere_volume=(4.0/3)*PI*r*r*r;	//圆球体积
   cylinder_volume=PI*r*r * h;			//圆柱体体积
   
    //输出结果
    printf("圆周长：%.2f\n",circumference);
    printf("圆面积：%.2f\n",circle_area);   
    printf("圆球表面积：%.2f\n",sphere_surface);
    printf("圆球体积：%.2f\n",sphere_volume);
    printf("圆柱体积：%.2f\n",cylinder_volume);
    
  return 0;
}
