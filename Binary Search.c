#include<stdio.h>
#define LEN 7

int BinarySearch(int* ar, int key) {
    int up, down, mid;
    down = 0;       // 처음
    up = LEN - 1;   // 끝
    
    for (;;) {         // 무한루프
        // 중앙 원소
        mid = (up + down) / 2;

        if (ar[mid] == key) return mid;
        // 목표 값이 원소보다 작다면 왼쪽 반 수행
        if (ar[mid] > key) {        
            up = mid - 1;           // 왼쪽으로
        }
        else {                      
            down = mid + 1;         // 오른쪽으로
        }
        // 검색이 끝남
        if (up < down) {
            return -1;
        }
    }
}

int main() {
    int tc, key, arr[LEN] = { 0, };     // 테스트 케이스 수, 찾는 숫자, 배열(오름차순)
    scanf_s("%d", &tc);   // 테스트 케이스 수 입력
    for (int t=0; t < tc; t++) {
        for (int i=0; i < LEN; i++)
            scanf_s("%d", &arr[i]);        // 배열 입력
        scanf_s("%d", &key);              // 찾을 숫자 입력
        int k = BinarySearch(arr, key);
        printf("%d %d", tc, k);
    }
}