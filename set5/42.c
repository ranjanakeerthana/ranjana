har[]);
int main(){
   char s1[100],s2[100];
    int k;
    printf("Enter first string: ");
     scanf("%s",s1);
   printf("Enter second string: ");
    scanf("%s",s2);
    k = compare(s1,s2);
   if(k == 1)
         printf("Both strings are equal.");
    else
         printf("Both strings are not equal");
    return 0;
}
int Compare(char s1[],char s2[]){
    int i=0,flag=0;
    while(s1[i]!='\0' && s2[i]!='\0'){
         if(s1[i]!=s2[i]){
             flag=1;
             break;
                }
         i++;
    }
    if (flag==0 && s1[i]=='\0' && s2[i]=='\0')
         return 1;
    else
        return 0;
}
