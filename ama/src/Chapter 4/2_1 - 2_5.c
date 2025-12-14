#include <stdio.h>

int numberReversalDouble () {
    int doubleDigit;
    int firstNum;
    int secondNum;

    printf("Enter your double digit number: ");
    scanf("%d", &doubleDigit);

    secondNum %= 10;
    (firstNum -= secondNum) / 10;

    printf("%d%d", secondNum, firstNum);

}

int numberReversalTriple () {
    int tripleDigit;
    int firstNum;
    int secondNum;
    int thirdNum;

    printf("Enter your double digit number: ");
    scanf("%d", &tripleDigit);

    thirdNum = tripleDigit % 100;
    secondNum = ((tripleDigit - thirdNum) / 10) % 10;
    firstNum = (tripleDigit - secondNum * 10 - thirdNum) / 100;


    printf("Reverse number: %d %d %d", thirdNum, secondNum, firstNum);

}

int main () {
    numberReversalTriple();
}