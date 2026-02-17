#include <vector>
#include <algorithm>
#include <iostream>

// 숫자의 각 자리수를 순서대로 vector에 저장하는 함수
// 예: 3452 -> {3, 4, 5, 2}
std::vector<int> get_digits_in_order(int n) {
    std::vector<int> digits;
    if (n == 0) {
        digits.push_back(0); // 0일 때 예외 처리
        return digits;
    }
    while (n > 0) {
        digits.push_back(n % 10); // 일의 자리부터 저장
        n /= 10;
    }
    std::reverse(digits.begin(), digits.end()); // 순서 뒤집기
    return digits;
}

// 일반 배열의 두 요소를 교환하는 swap 함수
void swap_int(int &a, int &b) {
    // a와 b의 값을 교환
    int temp = a;
    a = b;
    b = temp;
}

// 테스트용 main 함수 (필요시 주석 해제)
/*
int main() {
    int num = 3452;
    std::vector<int> digits = get_digits_in_order(num);
    // 각 자리 출력
    for (int d : digits) {
        std::cout << d << " ";
    }
    std::cout << std::endl;
    return 0;
}
*/
