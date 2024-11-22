#include <stdio.h>
#include <string.h>
#include<stdlib.h>
int main(void) {
    //how to read as an input
    //string functions
    //1.strlen --> length of the string
    char C[] ="jfhajsdflh";
    size_t n = strlen(C);
    //strcpy
    char scr[6] = "hello";
    char dest[10];
    //strncpy
    strncpy(dest,scr,2);
    printf("%s",dest);
    
    //strcat
    char scr1[6] = "hello";
    char scr2[6] = "hello";
    strcat(scr1,scr2);
    printf("%s",scr1);
    
    //strncat
    strncat(scr1,scr2,3);
    printf("%s",scr1);
    
    //strcmp
    int res = strcmp(scr1,scr2);
    //if res == 0 then they are equal other wise not equal
    //strncmp
    char A[10] ="abc";
    char B[10] = "abcded";
    int res1 = strncmp(scr1,scr2,3);
    
    //strstr
    char s[20] = "hello world";
    char* pos = strstr(s,"world");
    
    
    
    
    
    
    
}
