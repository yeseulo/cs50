// 문제 1.
// 기존에 수박의 재고량은 5개였습니다.
// 이번에 들어온 주문은 수박 3건이며, 해당 물품의 가격은 10000원 입니다.
// 재고량을 차감해주고 매출액을 구하는 프로그램을 만들어 주세요.
// 또 매출액에서 부가세를 구해주세요.부가세는 물품가격의 10%입니다.
// 매출액은 물품의 가격과 부가세를 합산한 가격으로 구합니다.

#include <stdio.h>

int main(void)
{
  int stock = 5;
  int order = 3;
  int price = 10000;
  float tax = 1.1;

  printf("주문건수 : %i 건\n", order);
  printf("기존 재고량 : %i 개\n", stock);
  printf("남은 재고량 : %i 개\n", stock - order);
  printf("매출액(부가세포함) : %.0f 원\n", order * price * tax);
}