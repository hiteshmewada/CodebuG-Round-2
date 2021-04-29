void one(char arr[]){
        int len = strlen(arr);
        // change below line to pass all test cases
        for (int i = 0;i < len+1; i++){
            // change below line to pass all test cases
            if(i%2 != 0)
                // change below line to pass all test cases
                printf("%c", arr[i++]);
        }
}

void two(char arr[]){
       int len = strlen(arr);
       // change below line to pass all test cases
       for (int i = 0;i < len+1; i++){
           // change below line to pass all test cases
           if(i%2 ==0)
                // change below line to pass all test cases
                printf("%c", arr[i++]);
       }
}

int main() {

    char s[10000];
    int t;
    scanf("%d",&t);
    for (int a0 = 0; a0 < t; a0++){
        scanf("%s", s);
        one(s);
        printf(" ");
        two(s);
        printf("\n");
    }
    return 0;
}