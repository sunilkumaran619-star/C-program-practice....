#include <stdio.h>

struct data
{
    char name[30];
    int age;
    int roll_no;
    int route_no;
    long long mobile_no;
    char department[20];
};

void readfn(struct data s[], int n)
{
    for(int i = 0; i < n; i++)
    {
        printf("\nEnter details of Student %d\n", i + 1);

        printf("Name: ");
        scanf("%s", s[i].name);

        printf("Age: ");
        scanf("%d", &s[i].age);

        printf("Roll No: ");
        scanf("%d", &s[i].roll_no);

        printf("Route No: ");
        scanf("%d", &s[i].route_no);

        printf("Mobile No: ");
        scanf("%lld", &s[i].mobile_no);

        printf("Department: ");
        scanf("%s", s[i].department);
    }
}

void displayfn(struct data s[], int n)
{
    int roll;
    int found = 0;

    printf("\nEnter Roll Number to search: ");
    scanf("%d", &roll);

    for(int i = 0; i < n; i++)
    {
        if(s[i].roll_no == roll)
        {
            printf("\n--- Student Details ---\n");
            printf("Name       : %s\n", s[i].name);
            printf("Age        : %d\n", s[i].age);
            printf("Roll No    : %d\n", s[i].roll_no);
            printf("Route No   : %d\n", s[i].route_no);
            printf("Mobile No  : %lld\n", s[i].mobile_no);
            printf("Department : %s\n", s[i].department);

            found = 1;
            break;
        }
    }

    if(found == 0)
    {
        printf("Student not found!\n");
    }
}

int main()
{
    int n;

    printf("Enter number of students: ");
    scanf("%d", &n);

    struct data student[n];

    readfn(student, n);
    displayfn(student, n);

    return 0;
}