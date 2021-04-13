#include <stdio.h>
int main ()

{
    int bonbong, bonus, total; //본봉, 보너스, 총수입액을 저장할 변수
    double tax, real_income; // 세금과 실 입금액을 저장할 변수

    total = bonbong+bonus;
    tax = total*0.9;
    real_income = total - tax;
    
    return 0;

}