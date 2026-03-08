#include <stdio.h>
#include <limits.h>

int main()
{
    int n, i;
    
    printf("Enter number of employees: ");
    scanf("%d", &n);

    int salary[n];

    printf("Enter salaries:\n");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &salary[i]);
    }

    int largest = INT_MIN;
    int second = INT_MIN;

    for(i = 0; i < n; i++)
    {
        if(salary[i] > largest)
        {
            second = largest;
            largest = salary[i];
        }
        else if(salary[i] > second && salary[i] != largest)
        {
            second = salary[i];
        }
    }

    printf("Second highest salary: %d", second);

    return 0;
}
