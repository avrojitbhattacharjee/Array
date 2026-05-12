//Pattern
//1.Patter type 1 print 1 22 33 44 Right angle
#include<stdio.h>
int main()
{
    int raw,col,n;
    printf("Enter a number: ");
    scanf("%d",&n);

    for(raw=1; raw<=n; raw++){
        for(col=1; col<=raw; col++){
            printf("%d",raw);
        }
        printf("\n");
        
    }
    
    return 0;
}

//2.pattern type 2 print 1 12 123 1234
#include<stdio.h>
int main()
{
    int raw,col,n;
    printf("Enter a number: ");
    scanf("%d",&n);

    for(raw=1; raw<=n; raw++){
        for(col=1; col<=raw; col++){
            printf("%d",col);
        }
        printf("\n");
        
    }
    
    return 0;
}
//3.triangled pattern 
#include<stdio.h>
int main()
{
    int raw,col,n;
    printf("Enter a number: ");
    scanf("%d",&n);

    for(raw=1; raw<=n; raw++){
        for(col=1; col<=n-raw; col++){
            printf(" ");
        }
        
        for(col=1; col<2*raw-1; col++){
            printf("*");
        }
        printf("\n");
    }
    
    return 0;
}

//2D Array
//4.Matrix addition
#include<stdio.h>
int main()
{
    int a[10][10],b[10][10],sum[10][10];
    int raw,col,i,j;

    printf("Enter The number of raw");
    scanf("%d",&raw);

    printf("Enter The number of col: ");
    scanf("%d",&col);

    printf("\nEnter The element of 1st Matrix: \n");
    for(i=0; i<raw; i++){
        for(j=0; j<col; j++){
            scanf("%d",&a[i][j]);
        }
        printf("\n");
    }

    printf("\nEnter The element of 2nd matrix: \n");
    for(i=0; i<raw; i++){
        for(j=0; j<col; j++){
            scanf("%d",&b[i][j]);
        }
        printf("\n");
    }

    printf("\nSum Of Matrix\n");
    for(i=0; i<raw; i++){
        for(j=0; j<col; j++){
            sum[i][j]=a[i][j]+b[i][j];
        }
        printf("\n");
    }

    printf("\nAfter addition\n");
    for(i=0; i<raw; i++){
        for(j=0; j<col; j++){
            printf("%d\t",sum[i][j]);
        }
        printf("\n");
    }
    return 0;
}

//5.Matrix multiplication
#include<stdio.h>
int main()
{
    int a[10][10],b[10][10],mul[10][10];
    int raw,col,i,j,k;
    int sum=0;

    printf("Enter The number of raw");
    scanf("%d",&raw);

    printf("Enter The number of col: ");
    scanf("%d",&col);

    printf("\nEnter The element of 1st Matrix: \n");
    for(i=0; i<raw; i++){
        for(j=0; j<col; j++){
            scanf("%d",&a[i][j]);
        }
        printf("\n");
    }

    printf("\nEnter The element of 2nd matrix: \n");
    for(i=0; i<raw; i++){
        for(j=0; j<col; j++){
            scanf("%d",&b[i][j]);
        }
        printf("\n");
    }

    printf("\nMultiplication\n");
    for(i=0; i<raw; i++){
        for(j=0; j<col; j++){
            sum=0;
            for(k=0; k<col; k++){
                sum += a[i][k]*b[k][j];
                mul[i][j] = sum;
            }
        }
    }

    printf("\nAfter Multiplication\n");
    for(i=0; i<raw; i++){
        for(j=0; j<col; j++){
            printf("%d\t",mul[i][j]);
        }
        printf("\n");
    }
    return 0;
}

//6.Trace (sum of diagonal) Matrix
#include<stdio.h>
int main()
{
    int a[10][10];
    int i,j,raw,col;
    int trace =0;

    printf("Enter The unmber of raw: ");
    scanf("%d %d",&raw,&col);

    printf("\nEnter matrix\n");
    for(i=0; i<raw; i++){
        for(j=0; j<col; j++){
            scanf("%d",&a[i][j]);
        }
        printf("\n");
    }

    for(i=0; i<raw; i++){
        trace += a[i][i];
    }

    
    printf("\nDisplay matrix\n");
    for(i=0; i<raw; i++){
        for(j=0; j<col; j++){
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }

    printf("Trace are %d",trace);

    return 0;

}

//7.Structure input output highest lowest
#include<stdio.h>
struct student{
    char name[20];
    int id;
    float result;
}s1,s2,s3;
int main()
{
    printf("Enter name id and Result: \n");
    scanf("%s %d %f",&s1.name,&s1.id,&s1.result);

    printf("Enter 2nd student name,id and result:\n");
    scanf("%s %d %f",&s2.name,&s2.id,&s2.result);

    printf("Enter 3rd Student name id and result:\n");
    scanf("%s %d %f",&s3.name,&s3.id,&s3.result);

    printf("\n %s",s1.name);
    printf("\n %d",s1.id);
    printf("\n %.2f",s1.result);

    printf("\n %s",s2.name);
    printf("\n %d",s2.id);
    printf("\n %.2f",s2.result);

    printf("\n %s",s3.name);
    printf("\n %d",s3.id);
    printf("\n %.2f",s3.result);


 highest = s1.result;
    if(s2.result > highest)
        highest=s2.result;

    if(s3.result > highest)
        highest = s3.result;
        
    lowest = s2.result;
    if(s2.result < lowest)
    lowest = s2.result;
    
    if(s3.result < lowest)
    lowest = s3.result;

    printf("\nhighest %.2f",highest);
    printf("\nLowsest %.2f",lowest);
    

    return 0;
}

//8.reccurssion print 1 to n time 
#include<stdio.h>
void print(int n){
    if(n==0){
        return;
    }else{
        print(n-1);
        printf("%d\n",n);
    }
}
int main()
{   int n;
    printf("enter a number:");
    scanf("%d",&n);
    print(n);
    printf("\n");
    return 0;
}

//9.reccurssion factroiral
#include<stdio.h>

long long fact(int n){
    if(n==0 || n==1){
        return 1;
    }
    else{
        return n* fact(n-1);
    }
}
int main()
{
    int num;
    long long result;
    
    printf("Enter a non negative integer :");
    scanf("%d",&num);

    if(num<0){
        printf("Error: Factrorial not defined for negative number\n");
        return 1;
    }
    result=fact(num);

    printf("Factroiral of %d = %lld\n",num,result);

    return 0;

}

//9.string copy
#include<stdio.h>
#include<string.h>
int main()
{
    char ch[]="Avrojit";
    char ch2[100];

    strcpy(ch2,ch);
    printf("%s",ch2);

    return 0;
}

//10.string compare
#include<stdio.h>
#include<string.h>
int main()
{
    char ch1[20],ch2[20];

    printf("Enter first string: ");
    scanf("%s",&ch1);

    printf("Enter 2nd string:");
    scanf("%s",&ch2);

    if(strcmp(ch1,ch2)==0){
        printf("String are Equal");
    }else{
        printf("String Are Not Equal");
    }
    return 0;
}

//11.String compare without strcmp function
#include<stdio.h>
#include<string.h>
int main()
{
    char ch1[20],ch2[20];

    printf("Enter first string: ");
    scanf("%s",&ch1);

    printf("Enter 2nd string:");
    scanf("%s",&ch2);

    if(strcmp(ch1,ch2)==0){
        printf("String are Equal");
    }else{
        printf("String Are Not Equal");
    }
    return 0;
}

//12.string lenght without function
#include<stdio.h>
#include<string.h>
int main()
{
    char ch1[20];
    int i,lenght=0;

    printf("Enter first string: ");
    scanf("%s",&ch1);

    for(i=0; ch1[i] !='\0'; i++){
        lenght++;
    }
    printf("Lenght=%d",lenght);
    

   
    return 0;
}

//13.split string
#include<stdio.h>
#include<string.h>
void split(char st[]){
    int i;

    for(i=0; st[i] !='\0'; i++){
        if(st[i]== ' '){
            printf("\n");
        }else{
            printf("%c",st[i]);
        }
    }

}
int main()
{
    char st[100];
    printf("Enter word: ");
    fgets(st,sizeof(st),stdin);
    printf("\nSplit output\n");
    split(st);
    return 0;
}

//14.string sentence count
#include<stdio.h>
#include<string.h>
int main()
{
    char st[100];
    int i,count = 1;

    printf("Enter a sentence: ");
    fgets(st,sizeof(st),stdin);

    for(i=0; st[i] !='\0'; i++){
        if(st[i]==' '){
            count++;
        }
    }
    printf("Total word count= %d",count);

    return 0;
}
