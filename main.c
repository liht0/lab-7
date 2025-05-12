#include <stdio.h>
struct humen{
	char * name;
	char * surname;
	char * fname;	
	int age;
};
int main(){
	int N = 5; 
	struct humen h1[N], h2[N];
	FILE *input;
	char s1[30], s2[30], s3[30];
	int year;
	
	input = fopen("input.txt", "r");
	
	while(fscanf(input, "%s %s %s %d", h1[i].name, h1[i].surname, h1[i].fname, &h1[i].age) != EOF){
		printf("%s %s %s %d", h1[i].name, h1[i].surname, h1[i].fname, &h1[i].age);
		i++;
}
	for (i=0, i<N, i++){
	h2[i] = h1[i]
	}
	
	int j; 
	struct humen temp;
	for (i=0, i<N-1, i++){
		for (j=0, j<N-i-1, j++){
			if (h2[j].year > h2[j+1].year){
				temp = h2[j+1];
				h2[j+1] = h2[j];
				h2[j] = temp;
}
}
}
	printf("H2 : \n");
	for (i=0, i<N, i++){
		printf("%s %s %s %d \n", h1[i].name, h1[i].surname, h1[i].fname, &h1[i].age);
	fclose(input);
	return 0;
}
