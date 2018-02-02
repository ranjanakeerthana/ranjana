#include <stdio.h>
  int main() {
    int n[10];
    int i;
    int g;
    printf("Enter ten values:");
    
    for (i = 0; i < 10; i++) {
    	scanf("%d", &n[i]);
    }
    g = n[0];
    for (i = 0; i < 10; i++) {
	if (n[i] > g) {
	g = n[i];
    }
    }
    printf("Greatest of ten numbers is %d", g);
    return 0;
  }
