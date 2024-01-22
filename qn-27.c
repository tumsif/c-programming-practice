#include <stdio.h>

int main()
{
    // initialize container for no of std
    int std_no;
    // accepting std_no
    printf("Enter the number of students: ");
    scanf("%d", &std_no);
    // initializing container for students marks
    int marks[std_no];
    // accepting marks for each student
    for (int i = 0; i < std_no; i++)
    {
        printf("Std %d: ", i + 1);
        scanf("%d", &marks[i]);
    }
    // initializing the container to contain sum of marks
    int sum_marks = 0;
    // calculating sum
    for (int j = 0; j < std_no; j++)
    {
        sum_marks += marks[j];
    }
    // calculating mean == sum_marks / std_no
    // intializing then assigning it to the mean.
    // float is chosen because mean can have a decimal
    float mean = sum_marks / std_no;
    // displaying the output of mean
    printf("The mean marks is %0.2f\n", mean);
    // initiallizing deviation from mean sum
    float sum_dev_mean = 0;

    for (int k = 0; k < std_no; k++)
    {
        float dev_mean = marks[k] - mean;
        // applies for negative no
        if (dev_mean < 0)
        {
            // for negative numbers take 0 - dev_mean to eliminate the negative
            dev_mean = 0 - dev_mean;
            // assigning to the sum of the deviation
            sum_dev_mean += dev_mean;
        }
        // applies for +ve numbers
        else
        {
            sum_dev_mean += dev_mean;
        }
    }
    // initializing mean of deviation
    // calculating the mean deviation
    float avg_dev_mean = sum_dev_mean / std_no;
    printf("The average deviation from the mean is %0.2f\n", avg_dev_mean);
    return 0;
}