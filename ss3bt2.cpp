#include<stdio.h>
int main(){
	float celsius, fahrenheit;
	printf("moi ban nhap do celsius la: ");
	scanf("%f",&celsius);
	fahrenheit = (celsius * 9 / 5) + 32;
	printf("do celsius la %.2f doi thanh do fahrenheit la %.2f",celsius,fahrenheit);
	return 0;
}
