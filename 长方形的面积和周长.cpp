#include<iostream>
using namespace std;
int main()
{
	double length,width,area,perimeter;

		//输入长方形的长
		cout <<"请输入长方形的长:";
	    cin>>length;
	    cout<<"请输入长方形的宽:";
		cin>>width;

		//计算面积和周长
        area=length*width;
		perimeter=2*(length+width);

		//输出结果
		cout<<"长方形的面积:"<<area<<endl;
		cout<<"长方形的周长:"<<perimeter<<endl;
	
		return 0;
}
