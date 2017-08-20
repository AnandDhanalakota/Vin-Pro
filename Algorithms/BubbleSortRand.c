
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

#define MAX_COL 100
#define MAX_ROW 10000

extern int rndArr[MAX_ROW][MAX_COL];

int main(void) {
	int i,j,k;
	for(k = 0;k < MAX_ROW; k++){
		int *arr = rndArr[k];
		int exchanged = 0;
		for(i = 0;i < MAX_COL-1; i++){
			exchanged = 0;
			for(j = 0;j < MAX_COL-i-1; j++){
				if(arr[j] > arr[j+1]){
					int temp;
					temp = arr[j+1];
					arr[j+1] = arr[j];
					arr[j] = temp;
					exchanged = 1;
				}
			}
			
			if(!exchanged){
			   printf("%d\n",i);
			   break;
			}
			if(i == MAX_COL-2 && exchanged)
				printf("%d\n",i);
		}
	}
}


