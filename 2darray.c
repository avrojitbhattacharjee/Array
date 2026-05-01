//Matrix addition substraction in c
#include<stdio.h>

    #define max_raws 10
    #define max_col 10
    int main()
    {
        int raws,col,i,j;
        int matrix1[max_raws][max_col],matrix2[max_raws][max_col];
        int result[max_raws][max_col];

        //Dimension of matrix
        printf("Enter The number of rows ",max_raws);
        scanf("%d",&raws);

        printf("Enter The number of columns ",max_col);
        scanf("%d",&col);

        //input element of 1st matrix

        printf("\nEnter Element of first matrix:\n");
        for(i=0; i<raws; i++){
            for(j=0; j<col; j++){
                printf("Enter Element[%d][%d]: ",i+1,j+1);
                scanf("%d",&matrix1[i][j]);
            }
            printf("\n");
        }

        //input element of 2nd matrix

        printf("\nEnter element of second matrix: \n");
        for(i=0; i<raws; i++){
            for(j=0; j<col; j++){
                printf("Enter element[%d][%d]: ", i+1,j+1);
                scanf("%d",&matrix2[i][j]);
            }
            printf("\n");
        }
        //substract
        printf("\nMatrix Substract:\n");
        for(i=0; i<raws; i++){
            for(j=0; j<col; j++){
                result[i][j]=matrix1[i][j]-matrix2[i][j];
            }
        }
        //display 1st matrix
        printf("\nFirst Matrix\n");
        for(i=0; i<raws; i++){
            for(j=0; j<col; j++){
                printf("%5d",matrix1[i][j]);
            }
            printf("\n");
        }
        //display 2nd matrix
        printf("\nFirst Matrix\n");
        for(i=0; i<raws; i++){
            for(j=0; j<col; j++){
                printf("%5d",matrix2[i][j]);
            }
            printf("\n");
    }

    //display result

    printf("\nResult of subtract\n");
    for(i=0; i<raws; i++){
        for(j=0; j<col; j++){
            printf("%5d",result[i][j]);
        }
        printf("\n");
    }

    return 0;
    }

//2.Trace(sum of digonal) Of matrix

#include<stdio.h>
#define max_size 10

int main()
{
    int matrix[max_size][max_size];
    int size,i,j;
    int trace=0;

    //input matrix size
    printf("Enter The Size Of Square Matrix",max_size);
    scanf("%d",&size);

    //input matrix elements
    printf("\nInput elements %d %d",size,size);
    for(i=0; i<size; i++){
        for(j=0; j<size; j++){
            printf("Element [%d][%d]",i+1,j+1);
            scanf("%d",&matrix[i][j]);
        }
        printf("\n");
    }
    //trace(sum of digonal)
    for(i=0; i<size; i++){
        trace +=matrix[i][i];
    }

    //display matrix
    printf("\nMatrix\n");
    for(i=0; i<size; i++){
        for(j=0; j<size; j++){
            printf("%5d",matrix[i][j]);
        }
        printf("\n");
    }

    //Display trace
    printf("\nTrace Of matrix = %d\n",trace);

    return 0;
}

