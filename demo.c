#include <stdio.h>
//�Ͻ����� ����ֵΪ����
//if��Ƕ��
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
				 printf("����");
				 return 0;
			 }
			 if (age <= 70) {
				 printf("����");
				 return 0;
			 }
			 else {
				 printf("����");
			 }
		 }
		 else {
			 printf("Сƨ�޶�");
		 }

	 }
/*
//���̫����
	if (age >= 18) {
		printf("����");
		return 0;
		if (age >= 40) {
			printf("����");
			return 0;
			if (age >= 70) { 
				printf("����");
				return 0;
			}
		}

	}
	else {
		printf("Сƨ�޶�");
	}
	*/

	return 0;
}