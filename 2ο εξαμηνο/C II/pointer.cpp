#include <stdio.h>
#include <stdlib.h>

int main(){
	int x = 5;
	int *ptr_x = &x;
	printf("H x=%d einai %d kai vrisketai sthn thesh %d RAM\n",x,&x);
	printf("H ptr_x=%d einai %d kai vrisketai sthn thesh %d RAM\n",ptr_x,&ptr_x);
	printf("H *ptr_x=%d einai %d kai vrisketai sthn thesh %d RAM\n",*ptr_x,*&ptr_x);
	
	

system("PAUSE");
return 0;
}
