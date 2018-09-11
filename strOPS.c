#include "strOPS.h"
#include "stdio.h"

int str_len(const char *str) {
    int i =0;
    while (str[i] != '\0') {
        ++i;
    }
    return i;
}

int str_begins_with(const char *str, char c) {
    if (str[0]==c){
        return 1;
    }
    else {
    
    return 0;
    }
}

int str_end_with(const char *str, char c) {
   int length = str_len(str);
    if(str[length]==c){
        return 1;
    }
    else {
        
        return 0;
    }
}

char *str_to_lower(char *str) {
    int i=0;
    while(str[i]!='\0'){
        if ( str[i] >= 'A' && str[i] <= 'Z' )
        {
            str[i] = str[i] + 32;
        }
        i++;
    }
    printf("%s\n", str);
    return NULL;
}

char *str_to_upper(char *str) {
    int i=0;
    while(str[i]!='\0'){
        if ( str[i] >= 'a' && str[i] <= 'z' )
        {
            str[i] = str[i] - 32;
        }
        i++;
    }
    printf("%s\n", str);
    return NULL;
}

char *str_concat(const char *str1, const char *str2) {
    char str3[50];
    int i = 0, j=0;
    
    while(str1[i] != '\0'){
        str3[i] = str1[i];
        i++;
    }
    
    for(j=0; str2[j] != '\0'; j++){
        str3[i] = str2[j];
        i++;
    }
    printf("Concat : %s\n",str3);
    return NULL;
}

int str_comp(const char *str1, const char *str2) {
    int match = 0, i =0;
    
    do {
        match = (str1[i] - str2[i]);
        if(match != 0){
            break;
        }
        i++;
    } while(str1[i] != '\0' || str2[i] != '\0');
    
    return match;
}

char *str_copy(char *to, const char *from) {
    int c =0;
    
    for(int i=0; from[i] != '\0'; i++){
        to[c] = from [c];
        c++;
    }
    
    printf("From String : %s\n",from);
    printf("To String : %s\n",to);
    
    return NULL;
}

int str_last_index_of(const char *str, char c) {
    int i = 0;
    
    while(str[i]!='\0'){
        if (c == str[i]){
            break;
            }
        i++;
    }
    
    return i;
}

int str_first_index_of(const char *str, char c) {
    int i = 0;
    
        if (c == str[i]){
            i = 0;
        }
        else{
            i = -1;
        }
    return i;
}

int is_plaindrome(const char *str) {
    int length = str_len(str);
    int i =0;
    int j = length-1;
    int k = length-1;
    
    for (i=0; i <= k; i++,j--){
        if(str[i] != str[j]){
            return -1;
        }
    }
            return 1;
        }


int is_anagram(const char *str1, const char *str2) {
    int length1 = str_len(str1);
    int length2 = str_len(str2);
    int match = 0;
    
    if(length1 != length2){
        return -1;
    }
    
            for(int i=0; i < length1; i++ ){
                for(int j=0; j < length1; j++ ){
                if(str1[i] == str2[j]){
                    match++;
                    break;
                }
                }
            }
    
    if(match != length1){
        match = -1;
    }
    
    return match;
}

char *str_compress(char *str) {   
    int start = 0;
    int i = 0;
    
    while(str[start] == ' '){
        start++;
    }
    
    if(start != 0 || start == 0 ){
        while(str[i + start] != '\0'){
            while(str[i + start] == ' ' && str[i + start -1] == ' '){
                str[i] = str[i + start];
                i++;
                start++;
                break;
            }
            
            while(str[i + start] != ' '){
                str[i] = str[i + start];
                i++;
                break;
            }
            
            while(str[i + start] == ' '){
                start++;
                break;
            }
        }
        str[i] = '\0';
    }
    
    printf("%s \n",str);
    return NULL;
}

char *str_trim(char *str) {
    int start = 0;
    int i = 0;
    
     while(str[start] == ' '){
         start++;
     }
 
     if(start != 0 || start == 0 ){
     while(str[i + start] != '\0'){
         if(str[i + start] != ' '){
             str[i] = str[i + start];
             i++;
             }
         else if(str[i + start] == ' '){
             start++;
             }
         }
     str[i] = '\0';
     }
    
     printf("%s \n",str);
    return NULL;
}

char *int_to_str(int num) {
    char buff[50];
    sprintf(buff,"%d",num);
    printf("Number to String: %s\n",buff);
    return NULL;
}
