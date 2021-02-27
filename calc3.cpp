/*
Author: Ceon Bang
Course: CSCI-136
Instructor: Tong Yi
Assignment: Project 1-D

using redirection to receive and read integers from randomly generated text file.
to calculate squared numbers

*/

#include <iostream>
using namespace std;

int main() {
    int sum = 0;
    char ch;

    int operand;
    char op = '+';
    cin >> operand;

    // https://m.blog.naver.com/PostView.nhn?blogId=kks227&logNo=60204963264&proxyReferer=https:%2F%2Fwww.google.com%2F


    while (cin >> ch) { // ch는 ^, ;, +, - 를 받을 수 있다.
        if (ch == '^') {
            // ch가 ^ 라면 operand의 값을 제곱하여 operand에 저장한다.
            operand *= operand;
        }
        else if (ch == ';') {
            // ch가 ; 라면 sum 값을 출력하고,
            // 다음 연산을 시작하기 위해 sum과 operand를 초기화한다.
            if (op == '+') {
                sum += operand;
            } else if (op == '-') {
                sum -= operand;
            }
            cout << sum << endl;
            sum = 0;
            op = '+';
            cin >> operand;
        }
        else if (ch == '+' or ch == '-') {
            // ch가 + 혹은 - 라면,
            // operand 값을 op에 따라 sum에 더하거나 뺀다.
            //   만약 op가 + 라면 sum에 더한다.
            //   만약 op가 - 라면 sum에서 뺀다.
            // 그리고 새로운 operand와 op를 저장한다.
            if (op == '+') {
                sum += operand;
            } else if (op == '-') {
                sum -= operand;
            }
            cin >> operand;
            op = ch;
            
        }
    }

    return 0;
}