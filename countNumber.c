#include<stdio.h>
int main() {
	int number;
	printf("Enter the length number: ");
	scanf("%d",&number);
	countNumber(number);
	return 0;
}

int countNumber(int number) {
	int zero=0,one=0,two=0,three=0,four=0,five=0,six=0,seven=0,eight=0,nine=0;
	int a[100],i,num,digit;
	printf("Enter the numbers: ");
	for(i=1; i<=number; i++) {
		scanf("%d",&a[i]);
		digit = a[i];
		switch(digit) {
			case 0:
				zero++;
				break;
			case 1:
				one++;
				break;
			case 2:
				two++;
				break;
			case 3:
				three++;
				break;
			case 4:
				four++;
				break;
			case 5:
				five++;
				break;
			case 6:
				six++;
				break;
			case 7:
				seven++;
				break;
			case 8:
				eight++;
				break;
			case 9:
				nine++;
				break;
		}
	}
	printf("zero: %d\none: %d\ntwo: %d\nthree: %d\nfour: %d\nfive: %d\nsix: %d\nseven: %d\neight: %d\nnine: %d\n",
	zero,one,two,three,four,five,six,seven,eight,nine);
	return 0;
}

/*	output=>
	Enter the length number: 10
	Enter the numbers: 0
	1
	2
	3
	3
	2
	1
	9
	8
	3
	zero: 1
	one: 2
	two: 2
	three: 3
	four: 0
	five: 0
	six: 0
	seven: 0
	eight: 1
	nine: 1
	
	--------------------------------
*/
