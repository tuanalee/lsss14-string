#include <stdio.h>



int main(){
	
	char sentence2[] = "xin chao, toi ten la ......\n";
	printf("%s", sentence2); 
	int length = sizeof(sentence2)/sizeof(char);
    printf("do dai cua mang sentence2 = %d\n", length);
	
	
	return 0; 
} 
