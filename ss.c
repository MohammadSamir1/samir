// this program is change the text in file

#include<stdio.h>
int main (){
    FILE *fptr;
    // test.text is a file name
    // w means write
    fptr = fopen("test.text", "w");
    fprintf(fptr, "%c",'S');
    fprintf(fptr, "%c",'u');
    fprintf(fptr, "%c",'h');
    fprintf(fptr, "%c",'e');
    fprintf(fptr, "%c",'l');
    fclose(fptr);
    return 0;
}