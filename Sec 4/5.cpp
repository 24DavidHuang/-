//#include <stdio.h>
//#include <string.h>
//int if_last(const char *gray) {
//    char endgray[10001];
//    *endgray='1';
//    if(strcmp(gray, endgray) == 0){
//        return 1;
//    }
//    else return 0;
//}
//
//int countone(char *gray, int len) {
//    int count = 0;
//    for (int i = 0; i < len; i++) {
//        if (gray[i] == '1') {
//            count++;
//        }
//    }
//    return count;
//}
//
//void next_gray(char *gray) {
//    int len = strlen(gray);
//    int count= countone(gray,len);
//    if (count%2==0){
//        gray[len-1]^=1;
//    }
//    else{
//        int index=len-1;
//        while(gray[index]=='0')
//            index--;
//        gray[--index]^=1;
//    }
//}
//
//int main() {
//    char gray[10001];
//
//    while (scanf("%s", gray) != EOF) {
//        int len= strlen(gray);
//        if (if_last(gray)) {
//            printf("-1\n");
//        } else {
//            next_gray(gray);
//            printf("%s\n", gray);
//        }
//    }
//    return 0;
//}