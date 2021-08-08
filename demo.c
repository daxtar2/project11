#include <stdio.h>
//严谨输入 输入值为负数
//if的嵌套
int main(void)
{
    int age;
	printf("Please enter your age:\n");
     scanf_s("%d", &age);

	 if ( age <= 0 || age >= 120) {
		 printf("Don't allow ,Please enter a right age ");
		 
		 return 0;
	    }
	 else {


		 if (age >= 18) {

			 if (age <= 40) {
				 printf("青年");
				 return 0;
			 }
			 if (age <= 70) {
				 printf("中年");
				 return 0;
			 }
			 else {
				 printf("老年");
			 }
		 }
		 else {
			 printf("小屁娃儿");
		 }

	 }
/*
//这个太丑了
	if (age >= 18) {
		printf("青年");
		return 0;
		if (age >= 40) {
			printf("中年");
			return 0;
			if (age >= 70) { 
				printf("老年");
				return 0;
			}
		}

	}
	else {
		printf("小屁娃儿");
	}
	*/

	return 0;
}