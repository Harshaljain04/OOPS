// // #include <stdio.h>

// // int main(void) {
// //     int t;
// //     scanf("%d",&t);
// //     while(t--){
// //         int x,y,z;
// //         scanf("%d %d %d",&x,&y,&z);
// //         if(((z/(x*(y)))*100)>50){
// //             printf("YES\n");
// //         }
// //         else{
// //             printf("NO\n");
// //         }
// //     }
// //     return 0;
// // }

// #include <stdio.h>
// #include <stdbool.h>

// bool vow(char c) {
//     return (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U');
// }

// bool reach(char* str) {
//     int i;
//     for (i = 0; i < 8; i++){
//         if (str[i] != 'C' && str[i] != 'O' && str[i] != 'D' && str[i] != 'E' && str[i] != 'T') {
//             if (vow(str[i])) {
//                 str[i] = 'A';
//             } else {
//                 str[i] = 'B';
//             }
//         }
//     }
//     return (strcmp(str,"CODEstr") == 0);
// }

// int main(void) {
//     int t;
//     scanf("%d",&t);
//     while (t--) {
//         char str[9];
//         scanf("%s", str);
//         if (reach(str)) {
//             printf("YES\n");
//         } else {
//             printf("NO\n");
//         }
//     }
//     return 0;
// }

#include <stdio.h>

int vow(char ch) {
    return (ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U');
}

char reach_str(char str[]) {
    char tgt[] = "CODETOWN";
    for (int i = 0; i < 8; i++) {
        if ((vow(str[i]) && !vow(tgt[i])) || (!vow(str[i]) && vow(tgt[i]))) {
            return 'N';
        }
    }

    return 'Y';
}

int main() {
    int t;
    scanf("%d",&t);
    while(t--)
    {
    char str[9];
    scanf("%s", str);
    char result = reach_str(str);
    if (result == 'Y') {
        printf("YES\n");
    } else {
        printf("NO\n");
    }
    }
    return 0;
}
