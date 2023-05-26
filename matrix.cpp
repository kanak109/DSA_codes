#include<stdio.h>

int main()
{

    int row, col, ar[10][10] = {0};
    int ans[100] = {0}, sum=0, index = 0;;

    freopen("input_mat.txt", "r", stdin);

    scanf("%d %d", &row, &col);

    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            scanf("%d", &ar[i][j]);


        }
    }

    // printing the matrix

//    for(int i=0;i<row;i++){
//        for(int j=0;j<col;j++){
//            printf("%d\t", ar[i][j]);
//
//
//        }
//        printf("\n");
//    }


    // Calculation of diagonal from left to bottom
    for(int i=0;i<row;i++){

        int k =i;


        for(int j=0;j< col-i;j++){
            sum = sum+ ar[k][j];
            k++;
        }

        ans[index] = sum;
        index++;
        sum = 0;
    }

    // Calculation of diagonal from Top to right

    for(int i=0;i<col;i++){

        int k = i;


        for(int j=0;j< row-i+1;j++){
            if(j==k){
                continue;
            }

            sum = sum+ ar[j][k];
            k++;
        }

        ans[index] = sum;
        index++;
        sum = 0;
    }

    // Calculation of diagonal from top towards left


    for(int i=0;i<=index;i++){
        printf("%d\t", ans[i]);
    }

    return 0;

}
