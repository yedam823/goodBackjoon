#include<stdio.h>
#include<stdlib.h>
#pragma warning(disable: 4996)
int main() {
	int n;
	int num;
	int arr[10001] = { 0 };
	scanf("%d", &n);
	
	for (int i = 0; i < n; i++) {
		scanf("%d", &num);
		arr[num]++;
	}
	for (int i = 1; i <= 10000; i++) {
		for (int j = 0; j < arr[i]; j++) {
			printf("%d\n", i);
		}
	}
}