#include <stdio.h>
int main() 
{
 double quiz1, quiz2, quiz3, quiz4, midterm1, midterm2, finalExam;
 double quizWeight = 0.3, midtermWeight = 0.4, finalWeight = 0.3;
 double totalScore;
 printf("Enter scores for the 4 quizzes:\n");
 printf("Quiz 1: ");
 scanf("%lf", &quiz1);

 printf("Quiz 2: ");
 scanf("%lf", &quiz2);

 printf("Quiz 3: ");
 scanf("%lf", &quiz3);

 printf("Quiz 4: ");
 scanf("%lf", &quiz4);

 printf("\nEnter scores for the 2 midterms:\n");

 printf("Midterm 1: ");
 scanf("%lf", &midterm1);

 printf("Midterm 2: ");
 scanf("%lf", &midterm2);

 printf("\nEnter score for the final exam: ");
 scanf("%lf", &finalExam);
 double weightedQuizScore = (quiz1 + quiz2 + quiz3 + quiz4) / 4 * quizWeight;
 double weightedMidtermScore = ((midterm1 + midterm2) / 2) * midtermWeight;
 double weightedFinalScore = finalExam * finalWeight;
 totalScore = weightedQuizScore + weightedMidtermScore + weightedFinalScore;
 printf("\nTotal Score: %.2lf\n", totalScore);
 return 0;
}