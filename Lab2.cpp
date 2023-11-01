//q1
#include<stdio.h>
int main(){
	int num , i;
	int sum = 0;
	printf("Enter number: ");
	scanf("%d",&num);
	for(i=1; i<=2*num; i++){
		if(i%2!=0){
			printf("%d ",i);
			sum+=i;
		}
	}printf("\nsum is: %d",sum);
	 
}
#include<stdio.h>
int main(){
	int num , i=1;
	int sum = 0;
	printf("Enter number: ");
	scanf("%d",&num);
	while(i<=2*num){
		printf("%d ",i);
		sum+=i;
		i+=2;
	}printf("\nsum is: %d",sum);
}
#include<stdio.h>
int main(){
	int num , i=1;
	int sum = 0;
	printf("Enter number: ");
	scanf("%d",&num);
	do{
		printf("%d ",i);
		sum+=i;
		i+=2;
	}while(i<2*num);
	printf("\nsum is: %d",sum);

}
//q2
#include<stdio.h>
int main(){
	int row=4;
	int i,j,k;
	for(i=1; i<=row; i++){
		for(j=1; j<=row-i; j++ ){
			printf(" ");
		}
		for(k=1; k<=i; k++){
			printf("* ");
		}
		printf("\n");
	}
//q3
#include <stdio.h>
#include <string.h>
int main(){
	char str1[]="sidr";
	char str2[]="sidra";
	int i;
	int equal;
	for(i=1; i<=strlen(str1); i++){
		if(strlen(str1)!=strlen(str2) || (str1[i]!=str2[i]) ){
			equal=0;
			break;
		}
	}
	if(equal==0){
		printf("strings are not equal");
	}else{
		printf("strings are equal");
	}
}
//q4
#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main(){
	int i;
	char str1[]="helLO world";
	for(i=0; i<=strlen(str1); i++){
		if (islower(str1[i]) ){
		 str1[i]=toupper(str1[i]);	
		}else{
		   str1[i]=tolower(str1[i]);		
		}
	}printf("%s",str1);
}
//q5
#include <stdio.h>
#include <string.h>
int main(){
	int i;
	int j,flag;
	char str2[]="sidraasb";
	for(i=0; i<=strlen(str2); i++){
		 flag=1;
	 for(j=0; j<=strlen(str2); j++){
	 	if (str2[i]==str2[j] && i!=j){
		 flag=0;
		 break;
		 }
	 }
	 if (flag==1){
	 	  printf("%c ",str2[i]);
	 }  
	}
}
//q6
#include <stdio.h>
struct Distance {
    int feet;
    float inches;
};
struct Distance addDistances(struct Distance d1, struct Distance d2) {
    struct Distance result;

    result.feet = d1.feet + d2.feet;
    result.inches = d1.inches + d2.inches;
    while (result.inches >= 12.0) {
        result.inches -= 12.0;
        result.feet++;
    }

    return result;
}

int main() {
    struct Distance distance1 = {5, 8.5};
    struct Distance distance2 = {3, 10.5};

    struct Distance sum = addDistances(distance1, distance2);

    printf("Sum of distances: %d feet %.2f inches\n", sum.feet, sum.inches);

    return 0;
