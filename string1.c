#include <stdio.h>
#include <string.h>
#include<stdlib.h>
//string handling functions

int main(void) {
    
    //1.strlen() function used to find the length of the given string
    //example
    char str[] = "Hello, world";
    size_t len = strlen(str);
    
    //2.strcpy() function used to copy the  entire string to the other
    //example
    char src[] = "Hello";
    char dest[20]; // dest size should be greater then or equal to the src size
    strcpy(dest,src);
    //printf("%s",dest);
    
    //3.strncpy() function used to copy exactly n character from src to dest
    strncpy(dest,src,3);
    dest[3] ='\0';
    
    //4.strcat() function used to concatenate two strings
    char str1[20] = "Hello"; // should need to mention the size for the str1
    //because we are adding str2 to str1
    char str2[] = " Wolrd";
    strcat(str1,str2);
    printf("%s",str1);
    
    //5.strncat() function used to concatenate n characters from str2
    strncat(str1,str2,3);
    
    //6.strcmp() function used to compare whether two strings are equal or not
    //if equal returns 0 otherwise return any other nonzero number
    char s1[] = "Hello";
    char s2[] = "Hello";
    int res = strcmp(s1,s2);
    
    //7.strchr() function used to find the position of a given character in a string
    char s3[] = "Hello, World";
    char *pos = strchr(s3,'W');
    //if(pos)printf("%ld",pos-s3);
    
    //8.strstr( function used to find the give string present in the original
    //string
    char s4[] = "Hello, World";
    char *p = strstr(s4,"World");//returns the address of the first character in
    //the World
    //if(p) printf("Substring found:%s\n",p);
    
    
    
    
    
    
    
    
    
}
