// 문제 1.
// 학생의 점수로 학점을 구하는 프로그램을 작성하시오.
// 키보드에서 입력받은 성적(0 ~100 점)의 유효성을 체크
// 학점은 배열을 이용하여 초기화(아래 “학점 테이블” 참조), 테이블을 이용하여 계산/출력
// 성적을 입력하여 계속 학점을 구하며 특별한 문자인 “999” 를 입력하면 프로그램을 종료

#include <cs50.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

const int EXIT_KEY = 999;
const int NUMBER_OF_GRADES = 9;
const int SCORES[NUMBER_OF_GRADES] = {95, 90, 85, 80, 75, 70, 65, 60, 0};
const char *GRADES[NUMBER_OF_GRADES] = {"A+", "A", "B+", "B", "C+", "C", "D+", "D", "F"};

void printGradeTable(const int scores[], const char *grades[], int length);
int getScore(void);
char *calculateGrade(int total, const int scores[], const char *grades[], int length);

int main(void)
{
  printf("학점 프로그램\n");
  printf("종료를 원하면 \"%i\"를 입력하세요.\n", EXIT_KEY);

  printGradeTable(SCORES, GRADES, NUMBER_OF_GRADES);
  getScore();

  return 0;
}

void printGradeTable(const int scores[], const char *grades[], int length)
{
  printf("[학점 테이블]\n");
  printf("점수: ");

  for (int i = 0; i < length; i++)
  {
    printf("%i\t", scores[i]);
    if (i == length - 1)
      printf("\n");
  }

  printf("학점: ");

  for (int i = 0; i < length; i++)
  {
    printf("%s\t", grades[i]);
    if (i == length - 1)
      printf("\n");
  }
}

int getScore(void)
{
  while (true)
  {
    int score = get_int("성적을 입력하세요. (0 ~ 100) : ");

    if (score == EXIT_KEY)
    {
      printf("학점 프로그램을 종료합니다.\n");
      break;
    }
    else if (score < 0 || score > 100)
    {
      printf("** %i 성적을 올바르게 입력하세요. 범위는 0 ~ 100 입니다.\n", score);
    }
    else
    {
      char *grade = calculateGrade(score, SCORES, GRADES, NUMBER_OF_GRADES);
      printf("학점은 %s 입니다.\n", grade);
    }
  }

  return 0;
}

char *calculateGrade(int total, const int scores[], const char *grades[], int length)
{
  char *grade = "";

  for (int i = 0; i < length; i++)
  {
    if (total >= scores[i])
    {
      grade = malloc(sizeof(char) * strlen(grades[i]));
      strcpy(grade, grades[i]);
      break;
    }
  }

  return grade;
}