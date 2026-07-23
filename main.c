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
    
return 0;
}