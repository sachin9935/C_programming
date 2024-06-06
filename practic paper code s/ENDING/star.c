#include<stdio.h>
int main(){
    int n;
    printf("enter number:");
    scanf("%d",&n);

// incresing pattren
//     for(int i=1; i<=n; i++){
//         for(int j=1; j<=i; j++){
//             printf("*");
//         }
//         printf("\n");
// // *
// // **
// // ***
// // ****
// // *****
// }


    // for(int i=1; i<=n; i++){//rows
    //     for(int j=i; j<=n; j++){//columns
    //     printf("*");
    //     }
    //     printf("\n");
// decrising tringle patern
// *****
// ****
// ***
// **
// *
    // }


    
//     for(int i=1; i<=n; i++){
//         for(int j=i; j<=n; j++){
//             printf(" ");
//         }
        
//         for(int j=1; j<=i; j++){
//             printf("*");
//         }
//         printf("\n");
// // right side triangle
// //      *
// //     **
// //    ***
// //   ****
// //  *****
//     }


//         for(int i=1; i<=n; i++){
//             for(int j=1; j<=i; j++){
//                 printf(" ");
//             }
//             for(int j=i; j<=n; j++){
//                 printf("*");
//             }
//             printf("\n");
// // right decrising tringle
// //  *****
// //   ****
// //    ***
// //     **
// //      *
//         }

// for(int i=1; i<=n; i++){
//     for(int j=i; j<=n; j++){//decrising space
//         printf(" ");
//     }
//     for(int j=1; j<i; j++){ //this is changinng
//         printf("*");
//     }
//     for(int j=1; j<=i; j++){
//         printf("*");
//     }
// // hill pattern
// //      *
// //     ***
// //    *****
// //   *******
// //  *********
//     printf("\n");
// }


// for(int i=1; i<=n; i++){
//     for(int j=1; j<=i; j++){
//         printf(" ");
//     }
//     for(int j=i; j<n; j++){
//         printf("*");
//     }
//     for(int j=i; j<=n; j++){
//         printf("*");
//     }
// //  *********
// //   *******
// //    *****
// //     ***
// //      *
//     printf("\n");
//}


// // dimond patern
// for(int i=1; i<n; i++){//this part for chai=nging...
//     for(int j=i; j<=n; j++){//decrising space
//         printf(" ");
//     }
//     for(int j=1; j<i; j++){
//         printf("*");
//     }
//     for(int j=1; j<=i; j++){
//         printf("*");
//     }
//     printf("\n");
// }

// for(int i=1; i<=n; i++){
//     for(int j=1; j<=i; j++){
//         printf(" ");
//     }
//     for(int j=i; j<n; j++){
//         printf("*");
//     }
//     for(int j=i; j<=n; j++){
//         printf("*");
//     }
//     printf("\n");
//      *
//     ***
//    *****
//   *******
//  *********
//   *******
//    *****
//     ***
//      *
// }


// practic night...

// for(int i=1; i<=n; i++){//rows
//     for(int j=i; j<=n; j++){
//         printf("*");
//     }
//     printf("\n");


// for(int i=1; i<=n; i++){
//     for(int j=i; j<=n; j++){
//         printf(" ");
//     }
//     for(int j=1; j<=i; j++){
//         printf("*");
//     }
//     printf("\n");

// }

// for(int i=1; i<=5; i++){
//     for(int j=i; j<=n; j++){
//         printf(" ");
//     }
//     for(int j=1; j<=i; j++){
//         printf("*");
//     }
//     printf("\n");
// }


// for(int i=1; i<=n; i++){
//     for(int j=1; j<=i; j++){
//         printf(" ");
//     }
//     for(int j=i; j<=n; j++){
//         printf("*");
//     }
//     printf("\n");
// }














// for(int i=1; i<=n; i++){
//     for(int j=i; j<=n; j++){
//         printf(" ");
//     }
//     for(int j=1; j<i; j++){
//         printf("*");
//     }
//     for(int j=1; j<=i; j++){
//         printf("*");
//     }
//     printf("\n");
// }

for(int i=1; i<=n; i++){
    for(int j=1; j<=i; j++){
        printf(" ");
    }
    for(int j=i; j<n; j++){
        printf("*");
    }
    for(int j=i; j<=n; j++){
        printf("*");
    }
    printf("\n");
}
}


