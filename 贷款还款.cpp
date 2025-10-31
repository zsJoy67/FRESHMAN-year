#include <stdio.h>
#include <math.h>	//运用数学函数
int main()
{
  double d,p,r,m,n,f;
  d=300000;//贷款总额 
  p=6000;//每月还款额 
  r=0.01;//月利率
  m=log10(p/(p-d*r)) ;
  n=log10(1+r);
  f=m/n;   //计算月数f
  printf("还清贷款需要月数为：%.1f\n",f); 
return 0;
 } 
