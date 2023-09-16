//
// Created by hp on 2023/9/16.
//
#include <stdio.h >
#include <stdlib.h>
#include <time.h>
int main(void) {
    int high = 100;
    //选数的取值范围
    int chance = 7;
    //构造函数机会为七次
//输入游戏规则
    printf("The computer will generate a random number between 1 and %d\nYou have %d chances.\n",
           high, chance);
//在某个范围内选一个数，rand 可产生一个随机数
    srand(time(NULL)); // use current time as seed for random generator
    int secret = rand() % high + 1;
    printf("secret = %d\n", secret);
//让玩家输入他的答案 scarf扫描，此处利用printf 将随机数输出
    while (chance > 0) {
        printf("Enter your guess.\n");
        int guess;
        scanf("%d", &guess);
//比较答案与猜测的大小并告诉玩家
        if (guess == secret) {
            printf("You Win!\n");
            break;
            //break 使进度终止
        } else if (guess > secret) {
            printf("guess > secret\n");
        } else {
            printf("guess < secret\n");
        }
//循环，直到玩家成功或失败
        chance--;
        // chance = chance - 1;
    }
    printf("you lose") ;
    return 0;
    //结束
}