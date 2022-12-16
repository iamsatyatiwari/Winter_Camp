#include <bits/stdc++.h>

using namespace std;

void strncat(char s1[],char s2[],int n){
    char *p = &s1[0];
    char *q = &s2[0];
    while(*p != '\0'){
        p++;
    }
    int i = 0;
    while(i<n){
        *p = *q;
        p++;q++;
        i++;
    }
    *p = '\0';
}
void strncopy(char s1[],char s2[],int n){
    char *p = &s1[0];
    char *q = &s2[0];
    while(n--){
        *p = *q;
        p++;
        q++;
    }
    
    *p = '\0';
}


void strnrep(char s1[],char s2[],int n){
    char *p = &s1[0];
    char *q = &s2[0];
   
    while(n--){
        *p = *q;
        p++;q++;
    }
    
}

int strncmp(char s1[],char s2[],int n){
    char *p = &s1[0];
    char *q = &s2[0];
   
    while(n--){
        if(*p < *q){
            return -1;
        }
        else if(*p > *q)
        return 1;
        
    }
    return 0;
    
}


void strsort(char arr[],int n){
    char *p = &arr[0];
    char *q = &arr[1];
    for(int i = 0; i<n;i++){
        for(int j = 1; j<n-i;j++){
            if(*p > *q){
                char temp = *p;
                *p = *q;
                *q = temp;
                // *p = *q;
                p++;
                q++;
            }
            else{
                p++;
                q++;
            }
        }
        p = arr;
        q = arr+1;
    }
}

int main() {
//   char s1[] = "Ajay";
//   char s2[] = "Vijay";
char arr[] = {'M','H','P','A','D','Z','T','G'};
int n = 8;
strsort(arr,n);
for(int i = 0; i<n;i++){
    cout<<arr[i]<<" ";
}
   //n should be less than s2.length()
//   int n = 2;
//   strncat(s1,s2,n);
//   cout<<s1<<" "<<endl;
//   strncopy(s1,s2,n);
//   cout<<s1<<" "<<endl;
//   strnrep(s1,s2,n);
//   cout<<s1<<" "<<endl;
//   cout<<strncmp(s1,s2,n);
//   cout<<s1<<" "<<endl;
}