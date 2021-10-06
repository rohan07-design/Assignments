#include <stdio.h>

int main() {
    int i, j, num, sum;
    printf("Enter the number: ");
    scanf("%d", &num);

    printf("All Perfect numbers between 1 to %d:\n", num);
    
    for(i=1; i<=num; i++) {
        sum = 0;
        for(j=1; j<i; j++) {
            if(i % j == 0) {
                sum += j;
            }
        }
        if(sum == i) {
            printf("%d\t", i);
        }
	}	
    return 0;
}

/*output=>
	Enter the number: 300
	All Perfect numbers between 1 to 300:
	6       28
	--------------------------------
*/
