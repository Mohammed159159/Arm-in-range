#include<stdio.h>

int armRange(int num1, int num2);
int arm(int num);
int main() {

    int num;
    int num2;
    printf(" Enter Initial Number: ");
    scanf_s(" %d", &num);
    printf(" Enter Final Number: ");
    scanf_s(" %d", &num2);
    armRange(num, num2);


}
int armRange(int num1, int num2) {
    int i = num1;
    for (i; i <= num2; i++) {
        arm(i);
    }



}

int arm(int num) {
    int result = 0;
    int acc;
    int c = num;
    while (num > 0) {
        acc = num % 10;
        num = num / 10;
        result += acc * acc * acc;
    }
    if (result == c)
        printf("\n Armstrong: %d", c);
}





