#include "stdio.h"
#include "stdlib.h"
#include "strOPS.h"

/**
 * You may use the following file to test
 * your implementation of the strOPS file.
 * You will not be graded on any code written
 * in this file. However, grading can be made
 * if you devise good tests for me to use.
 * @param argc
 * @param argv
 * @return
 */


void StringLen(const char *arr){
    int length = str_len(arr);
    printf("Length of string : %d\n", length);
    
}

void StringBegn(const char *arr){
    char first = arr[0];
    int num = str_begins_with(arr,first);
    if(num > 0){
        printf("There is a letter at the begninng of string\n");
    }
    else{
        printf("There is no letter at the begninng of string\n");
        
    }
}

void StringEnd(const char *arr){
    int length = str_len(arr);
    char last = arr[length];
    int num = str_end_with(arr,last);
    if(num > 0){
        printf("There is a letter at the end of string\n");
    }
    else{
        printf("There is no letter at the end of string\n");
        
    }
}

void StringComp(const char *arr3, const char *arr4){
    int match = str_comp(arr3, arr4);
    
    if (match < 0){
        printf("Str1 come after Str2\n");
    }
    else if (match > 0){
        printf("Str2 come after Str1\n");
    }
    else{
        printf("Both Strings equal\n");
    }
}

void StringLastIndex(const char *arr){
    int length = str_len(arr);
    char last = arr[length];
    int num = str_last_index_of(arr,last);
    
    if(num < 0){
        printf("Could not find last index");
    }
    else{
        printf("The Last string is at index %d\n",num-1);
    }
}


void StringFirstIndex(const char *arr){
    char first = arr[0];
    int num = str_first_index_of(arr,first);
    
    if(num == -1){
        printf("Could not find first index");
    }
    else{
        printf("The First string is at index %d\n",num);
    }
}

void StringPal(const char *pal){
    int Pali = is_plaindrome(pal);
    
    if (Pali > 0){
        printf("It is a Plaindrome\n");
    }
    else{
        printf("It is not a Plaindrome\n");
    }
}

void StringAna(const char *ana1, const char *ana2){
    int anagram = is_anagram(ana1,ana2);
    
    if (anagram > 0){
        printf("It is an Anagram\n");
    }
    else{
        printf("It is not an Anagram\n");
    }
    
}


int main(int argc, const char * argv[]) {
    char arr[] = "Good Morning!";
    
    StringLen(arr);
    StringBegn(arr);
    StringEnd(arr);
   
    str_to_lower(arr);
    str_to_upper(arr);
    
    char arr1[] = "Care for some tea?";
    
    str_concat(arr,arr1);
    
    
    char arr3[] = "abc";
    char arr4[] = "ABc";
    
    StringComp(arr3,arr4);
    
    char arrcop[50];
    str_copy(arrcop, arr);
    
    StringLastIndex(arr);
    StringFirstIndex(arr);
    
    char pal[] = "noon";
    StringPal(pal);
    
    char ana1[] = "baker";
    char ana2[] = "break";
    StringAna(ana1,ana2);
    
    char arr5[] = "  An   Eagle    Sores !!! ";
    str_compress(arr5);
    
    char arr6[] = "Game   of    Thrones";
    str_trim(arr6);
    
    int number = 1234;
    int_to_str(number);
    
    printf("Hello, World!\n");
    return 0;
}
