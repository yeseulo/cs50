// 문제 3.
// 요일을 입력했을 때 해당 요일의 메뉴를 출력해 주는 프로그램을 개발 해서 고객의 요구사항을 잘 구현해 주세요!
// 각 요일별 메뉴는 다음과 같습니다.

// 월요일 : 청국장
// 화요일 : 비빔밥
// 수요일 : 된장찌개
// 목요일 : 칼국수
// 금요일 : 냉면
// 토요일 : 소불고기
// 일요일 : 오삼불고기

// 요일을 입력하세요: 화요일
// 화요일: 비빔밥

#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
  string day = get_string("요일을 입력하세요: ");
  string menu = '';

  if (strncmp(day, "월요일") == 0)
  {
    menu = "청국장";
  }
  else if (strncmp(day, "화요일") == 0)
  {
    menu = "비빔밥";
  }
  else if (strncmp(day, "수요일") == 0)
  {
    menu = "된장찌개";
  }
  else if (strncmp(day, "목요일") == 0)
  {
    menu = "칼국수";
  }
  else if (strncmp(day, "금요일") == 0)
  {
    menu = "냉면";
  }
  else if (strncmp(day, "토요일") == 0)
  {
    menu = "소불고기";
  }
  else if (strncmp(day, "일요일") == 0)
  {
    menu = "오삼불고기";
  }

  printf("%s: %s\n", day, menu);
}