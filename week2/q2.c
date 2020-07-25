// 문제 2.
// 여러분은 인터넷 은행의 인턴으로 취업을 했습니다.
// 1년 동안 저축을 했을 때 이율을 원금의 1.2%로 주는 예금이 있다고 합니다.
// 고객이 목표금액을 입력하면 1년 만기시 받는 원금과 이자의 합계를 출력해 주는 코드를 작성해 달라는 팀장님의 지시를 받았습니다.
// 예금액에 따라 만기시 받게 되는 금액을 구하는 코드를 작성해 주세요.

#include <cs50.h>
#include <stdio.h>

int get_target_amount(void);

int main(void)
{
  float rate = 1.012;
  int amount = get_target_amount();
  printf("1년 만기지급액 : %.2f 원\n", amount * rate);
}

int get_target_amount(void)
{
  int n;
  do
  {
    n = get_int("목표 금액(원): ");
  } while (n < 1);
  return n;
}
