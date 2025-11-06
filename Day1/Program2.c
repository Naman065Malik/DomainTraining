#include <stdio.h>
#include <string.h>

void main(){
    char text[] = "aabaabababaabaab";
    char pattern[] = "abab";

    int n = strlen(text) - 1;
    int m = strlen(pattern) - 1;

    int i = 0, j = 0;
    while(i < n){
        if(text[i] == pattern[j]){
            while(true){
                if(text[i] == pattern[j]){
                    i++; j++;
                }
                else{
                    j = 0; break;
                }
                
            }
        }
    }
}