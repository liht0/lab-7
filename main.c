#include <stdio.h>
#include <string.h>

typedef struct humen {
    char name[50];
    char sname[50];
    int year;
    
} humen;

void sort(humen arg[], int n) {
    int i, j;
    humen temp;
    for (i = 0; i < n-1; i++) {
        for (j = 0; j < n-i-1; j++) {
            if (arg[j].year > arg[j+1].year) {
                temp = arg[j];
                arg[j] = arg[j+1];
                arg[j+1] = temp;
}
}
}
}
int main() {
	int i;
    humen arg1[4], arg2[4];
    
    printf("vvedite dannie dlia 4 chelovek:\n");
    for (i = 0; i < 4; i++) {
        printf("Human %d:\n", i+1);
        printf("Imia: ");
        scanf("%s", arg1[i].name);
        printf("Familia: \n");
        scanf("%s", arg1[i].sname);
        printf("year of burth: \n");
        scanf("%d", &arg1[i].year);
        
}
   
    memcpy(arg2, arg1, sizeof(arg1));
    
    sort(arg2, 4);
    
    printf("\nOtsotirovannii spisok: \n");
    for (i = 0; i < 4; i++) {
        printf("%s %s (%d y.o.)\n", arg2[i].sname, arg2[i].name, arg2[i].year);
}
    return 0;
}
