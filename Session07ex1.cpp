#include<stdio.h>;
int main(){
	int mang[] = {1, 2, 3, 4, 5};
	int do_dai = 5;
	
	printf("cac phan tu co trong mang la : ");
	for(int i = 0; i < do_dai;i++){
		   printf("%d\n", mang[i]);
	} 
	 printf("Do dai cua mang la: %d\n", do_dai);
	
	return 0;
}
