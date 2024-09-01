// STUDENT OUTPUT
// Athor: K.J

#include <stdio.h>

int main(void)
{
    /*
    STDENT DATA.
    student id = 15
    student age = 23
    student fee = 75.25
    student grade = B

    Task: Display the above info as output.
    */

    int studentId = 15;
    int studentAge = 23;
    float studentFee = 75.25;
    char studentGrade = 'B';

    printf("Student Data Output Is: ");
    printf("\n\nstudentId: %d   \n\nstudentAge:%d   \n\nstudentFee:%.1lf   \n\nstudentGrade:%c", studentId, studentAge, studentFee, studentGrade );

    return 0;
}
