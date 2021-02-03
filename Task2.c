#include <stdio.h>
int main()
{
    char name[50], data[100] ;
    int marks, i, num;
    printf("Enter number of students: ");
    scanf("%d", &num);
    FILE *fptr, *fp ;
    fptr = (fopen("student.txt", "w"));
    if(fptr == NULL)
    {
        printf("Error!");
        exit(1);
    }
    for(i = 0; i < num; ++i)
    {
        printf("For student %d\nEnter name: ", i+1);
        scanf("%s", name);
        printf("Enter marks: ");
        scanf("%d", &marks);
        fprintf(fptr,"\nName: %s \Marks: %d \n", name, marks);
    }
    fclose(fptr) ;
    fp = fopen( "student.txt", "r" ) ;
    if ( fp == NULL )
    {
        printf( "Could not open file student.txt" ) ;
        return 1;
    }
    printf( "\nReading the file student.txt\n" ) ;
    while( fgets ( data, 50, fp ) != NULL )
        printf( "%s", data ) ;
    printf("Closing the file student.txt") ;
    fclose(fp) ;
}
