/*
有 10 个学生,每个学生的数据包括学号,姓名、3 门课程的成绩,
从键盘输入 10个学生数据,要求输出 3 门课程分别的总平均成绩,
以及最高分的学生的数据(包括学号、姓名、3 门课程成绩、平均分数)。*/

#include <stdio.h>

//定义结构体数组 
struct student{
	int num;//学号 
	char name[10];//姓名 
	float score[3];//成绩
	float total_score;//三科总成绩 
};

int main(){
	//10名学生数组
	struct student stu[10];
	//每科平均成绩 
	float average_scores[3];
	int i,who;
	for(i=0; i < 10; i++){
		//输入 
		printf("请输入第%d个学生的学号，姓名，三科成绩\n", i + 1);
		scanf("%d %s %f %f %f",&stu[i].num, &stu[i].name, &stu[i].score[0], &stu[i].score[1], &stu[i].score[2]); 
		//三科总成绩 
		stu[i].total_score = stu[i].score[0] + stu[i].score[1] + stu[i].score[2]; 
	}
	for(i=0; i<10; i++){
		//三门课的平均成绩 
		average_scores [0] += stu[i].score[0];
		average_scores [1] += stu[i].score[1];
		average_scores [2] += stu[i].score[2];
		//找出最高分学生 
		if(stu[i].total_score > stu[who].total_score)
		who = i;
	}
	//输出 
	printf("3门课程分别的总平均成绩是：%.1f, %.1f, %.1f",average_scores[0]/10, average_scores[1]/10, average_scores[2]/10);
	printf("最高分学生学号：%d， 姓名：%s， 三门成绩：%.1f， %.1f， %.1f， 平均成绩：%.1f",
	stu[who].num,stu[who].name,stu[who].score[0],stu[who].score[1],stu[who].score[2],stu[who].total_score/3);
	return 0;
}
