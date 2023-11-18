/*Write a program to find the index of a substring of a string*/
#include<stdio.h>
#include<string.h>
void input_string(char* a, char* b){
    printf("Enter string : \n");
    scanf("%s", a); 
    printf("Enter substring : \n");
    scanf("%s", b);  
}
int sub_str_index(char* string, char* substring) {
    int len = strlen(string);
    int subLen = strlen(substring);

    for (int i = 0; i <= len - subLen; ++i) {
        int j;
        for (j = 0; j < subLen; ++j) {
            if (string[i + j] != substring[j]) {
                break;
            }
        }
        if (j == subLen) {
            return i; 
        }
    }
    return -1; 
}
void output(char* string, char* substring, int index) {
    printf("The index of '%s' in '%s' is %d\n", substring, string, index);
}
int main() {
    char mainString[100], subString[100];
    input_string(mainString, subString);
    int index = sub_str_index(mainString, subString);
    output(mainString, subString, index);
    return 0;
}
