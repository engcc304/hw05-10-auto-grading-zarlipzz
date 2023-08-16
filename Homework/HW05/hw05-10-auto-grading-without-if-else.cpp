/*
    ผู้ใช้กรอกค่า "คะแนนดิบ" เข้ามาในระบบเพื่อต้องการตรวจสอบเกรดในรายวิชา Programming ซึ่งมีเกณฑ์การให้คะแนนคือ F อยู่ในช่วงคะแนนน้อยกว่า 50 , D อยู่ในช่วงระหว่าง 50 ถึง 55 , D+ อยู่ในช่วงระหว่าง 55 ถึง 60 , C อยู่ในช่วงระหว่าง 60 ถึง 65 , C+ อยู่ในช่วงระหว่าง 65 ถึง 70 , B อยู่ในช่วงระหว่าง 70 ถึง 75 , B+ อยู่ในช่วงระหว่าง 75 ถึง 80 , A อยู่ในช่วงคะแนนมากกว่า 80 ขึ้นไป
    #TODO #20 : fix this code without if else syntax. 
    (กำหนดให้ข้อนี้ใช้คำสั่ง switch case ได้เท่านั้น)
    
    Test case:
        enter score :
            80
    Output:
        A !

    Test case:
        enter score :
            55
    Output:
        D+ !

    Test case:
        enter score :
            64
    Output:
        C !

    Test case:
        enter score :
            44
    Output:
        F !
*/
#include <stdio.h>

int main()
{
    int score = 0;
    printf("Please Enter your score : ");
    scanf("%d",&score);
    switch (score)
    {
    case 80:
        printf("A !");
        break;
    case 75:
        printf("B+ !");
        break;
    case 70:
        printf("B !");
        break;
    case 64:
        printf("C !");
        break;
    case 60:
        printf("C !");
        break;
    case 55:
        printf("D+ !");
        break;
    case 50:
        printf("D !");
        break;
    case 44:
        printf("F !");
        break;
    }
    return 0;
}