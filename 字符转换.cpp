#include<stdio.h>
int main(){
	char c1='c',c2='h',c3='i',c4='n',c5='a';  //¸³³õÖµ
	
	c1+=4;
	c2+=4; 
	c3+=4;
	c4+=4;
	c5+=4;
	
	printf("printfÊä³ö£º%c %c %c %c %c\n",c1,c2,c3,c4,c5);
	printf("putcharÊä³ö£º");
	putchar(c1);
	putchar(c2);
	putchar(c3);
	putchar(c4);
	putchar(c5);
	
return 0;
} 
