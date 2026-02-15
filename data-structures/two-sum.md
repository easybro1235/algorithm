# 두 수의 합 (Two Sum)

## 문제 정보
- **출처**: LeetCode
- **난이도**: Easy
- **링크**: https://leetcode.com/problems/two-sum/
- **날짜**: 2026-02-15

## 문제 설명
주어진 배열에서 두 수를 더해 목표값이 되는 두 숫자의 인덱스를 반환하는 문제입니다.

### 입력
- `nums`: 정수 배열
- `target`: 목표 합계

### 출력
- 합이 target이 되는 두 숫자의 인덱스 배열

### 예제
```
입력: nums = [2,7,11,15], target = 9
출력: [0,1]
설명: nums[0] + nums[1] = 2 + 7 = 9
```

## 접근 방법
- **사용한 알고리즘/자료구조**: Hash Table (Dictionary)
- **핵심 아이디어**: 각 숫자를 순회하면서 `target - 현재숫자`가 이미 해시 테이블에 있는지 확인
- **풀이 과정**:
  1. 빈 해시 테이블 생성
  2. 배열을 순회하면서 각 숫자에 대해:
     - complement = target - 현재 숫자 계산
     - complement가 해시 테이블에 있으면 답을 찾은 것
     - 없으면 현재 숫자와 인덱스를 해시 테이블에 저장
  3. 답을 찾으면 두 인덱스 반환

## 코드 구현

### Python
```python
def twoSum(nums, target):
    """
    해시 테이블을 사용한 Two Sum 풀이
    """
    seen = {}  # {숫자: 인덱스}
    
    for i, num in enumerate(nums):
        complement = target - num
        
        if complement in seen:
            return [seen[complement], i]
        
        seen[num] = i
    
    return []

# 테스트
print(twoSum([2, 7, 11, 15], 9))  # [0, 1]
print(twoSum([3, 2, 4], 6))        # [1, 2]
print(twoSum([3, 3], 6))           # [0, 1]
```

### Java
```java
class Solution {
    public int[] twoSum(int[] nums, int target) {
        Map<Integer, Integer> seen = new HashMap<>();
        
        for (int i = 0; i < nums.length; i++) {
            int complement = target - nums[i];
            
            if (seen.containsKey(complement)) {
                return new int[] { seen.get(complement), i };
            }
            
            seen.put(nums[i], i);
        }
        
        return new int[] {};
    }
}
```

## 복잡도 분석
- **시간 복잡도**: O(n) - 배열을 한 번만 순회
- **공간 복잡도**: O(n) - 해시 테이블에 최대 n개의 원소 저장

## 회고
### 배운 점
- 해시 테이블을 사용하면 O(n²) 브루트 포스를 O(n)으로 개선 가능
- 보수(complement) 개념을 활용한 효율적인 탐색
- One-pass 해시 테이블 기법

### 어려웠던 점
- 처음에는 중첩 반복문으로 접근했으나 시간 초과 발생
- 해시 테이블 활용 아이디어를 떠올리는 것이 핵심

### 개선 방향
- 다른 언어로도 구현해보기
- 유사한 패턴의 문제 더 풀어보기 (Three Sum, Four Sum 등)

## 관련 문제
- [15. 3Sum](https://leetcode.com/problems/3sum/)
- [167. Two Sum II - Input Array Is Sorted](https://leetcode.com/problems/two-sum-ii-input-array-is-sorted/)
- [170. Two Sum III - Data structure design](https://leetcode.com/problems/two-sum-iii-data-structure-design/)
