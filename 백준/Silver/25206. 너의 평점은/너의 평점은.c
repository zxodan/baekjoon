#include <stdio.h>
double Gradetod(char grade[]);
int main(void)
{
    char subj[51];
    double credit;
    char grade[2];
    double gradeSum=0.0, creditSum=0.0;

    for (int i=0;i<20;i++)
    {
        scanf("%s %lf %s",subj,&credit,grade);

        if (grade[0]!='P')
        {
            creditSum+=credit;
            gradeSum+=(Gradetod(grade)*credit);
        }
    }
    printf("%.6f\n",gradeSum/creditSum);

    return 0;
}
double Gradetod(char grade[])
{
    if (grade[0]!='F')
    {
        if (grade[1]=='+')
            return 69-grade[0]+0.5;
        else if  (grade[1]=='0')
            return (double) 69-grade[0];
    }
    return 0;
}
