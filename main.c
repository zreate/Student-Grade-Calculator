#include <stdio.h>

void displayTitle(){

    printf("====STUDENT GRADE CALCULATOR====");

}
float quizScore(float qscore){

    printf("Quiz Score(1-100): ");
    scanf("%f", &qscore);
    return qscore*0.20;

}
float assignmentScore(float ascore){

    printf("Assignment Score(1-100): ");
    scanf("%f", &ascore);
    return ascore*.20;
}
float midtermExam(float mexam){

printf("Midterm exam Score(1-100): ");
    scanf("%f", &mexam);
    return mexam*.25;

}
float finalExam(float fexam){

printf("Final exam Score(1-100): ");
    scanf("%f", &fexam);
    return fexam*.35;

}

float calculateGrade(float qscore, float ascore, float mexam, float fexam){

    int total =  qscore+ascore+mexam+fexam;
    return total;

}

char letterGrade(int grade){
char letter;

if (grade >= 90 && grade <=100 ){

letter = 'A';
printf("\nLetter Grade: %c", letter);

}
else if (grade >= 80 && grade <=89 )
{
letter = 'B';
printf("\nLetter Grade: %c", letter);
}
else if (grade >= 70 && grade <=99 )
{
letter = 'C';
printf("\nLetter Grade: %c", letter);
}
else if (grade >= 63 && grade <=79 )
{
letter = 'D';
printf("\nLetter Grade: %c", letter);
}
else if (grade < 63)
{
letter = 'F';
printf("\nLetter Grade: %c", letter);
}
else {
    printf("Invalid Parameters.");
}


}


int main (){

    displayTitle();
    
    float qscore;
    float ascore;
    float mexam;
    float fexam;
    float grade;
    char studentName[50];

    printf("\nEnter student Name: ");
    scanf("%s", &studentName);

    qscore = quizScore(qscore);
    ascore = assignmentScore(ascore);
    mexam = midtermExam(mexam);
    fexam = finalExam(fexam);

    grade = calculateGrade(qscore, ascore, mexam, fexam);

    printf("grade: %.2f%%", grade);

    letterGrade(grade);
    
return 0;
}