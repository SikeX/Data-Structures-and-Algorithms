#include <cstdio>

void show_arr(int a[], int len){
	int i = 0;
	while(i < len){
		printf("%d ",a[i]);
		i++;
	}
	printf("\n");
}

void Bubble_Sort(int a[], int len){
	while(len > 1){
	int i = 0;
		while(i < len - 1){
			if(a[i] > a[i + 1]){
				int temp = a[i];
				a[i] = a[i+1];
				a[i+1] = temp;
			}
			i++;
		}
		len--;
	}
}

void Selection_Sort(int a[], int len){
	int j = 0;
	while(j < len){
		int small = j;
		int i = j;
		while(i < len){
			i++;
			if(a[i] < a[small]){
				small = i;
			}
		}
		int temp = a[j];
		a[j] = a[small];
		a[small] = temp;
		j++;
	}
}

int main(void){
	
	int a[10] = {12,32,5,46,78,78,79,345,34,3};
	show_arr(a, 10);
	//Bubble_Sort(a, 10);
	//show_arr(a, 10);
	Selection_Sort(a, 10);
	show_arr(a, 10);
	
	return 0;
}