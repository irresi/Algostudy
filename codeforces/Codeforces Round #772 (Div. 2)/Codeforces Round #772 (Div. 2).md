# [Codeforces Round #772 (Div. 2)](https://codeforces.com/contest/1635)

## A. Min or Sum

모든 수 or 하기
배열에 각 비트별로 1번씩 등장하는 게 합이 최소가 되기 때문에

## B. Avoid Local Maximums

$a_{k-1}<a_{k}>a_{k+1}$인 Local Maximum에 대해 a_k를 양 옆 수 중 큰 값으로 설정하기($a_{k+1}$까지 Local Maximum이 생기지 않게 하기 위해) 이걸 1-based 일 때 2~n-1까지 반복

## C. Differential Sorting

이미 정렬되어 있다면 -> 0

맨 마지막 수가 음수이거나 $a_{n-1}>a_n$ 이라면 불가능 
(맨 뒤 두 수는 바꿀 수 없고 맨 마지막 수가 음수라면 그 앞의 수들도 그보다 작은 음수여야 하기 때문에)

그 밖의 경우는 $a_{i-1},a_i,a_n$을 i= n-1 ~ 2까지 선택하면 됨. a_n을 등차로 하는 등차수열이 만들어진다.

## D. Infinite Set

1. $x=a_i$ for some 1≤i≤n.
2. x=2y+1 and y is in S.
3. x=4y and y is in S.

2번 연산을 하면 최상위 비트가 1칸 오른쪽으로 이동되고 맨 뒤에 1이 붙는다.

3번 연산을 하면 최상위 비트가 2칸 오른쪽으로 이동된다.

p자릿수까지 밖에 사용할 수 없기 때문에 각 수별로 최상위 비트를 최대 몇 번 쉬프트 할 수 있는지 알아낸다.

n번 쉬프트 할 수 있을 때의 경우의 수는 피보나치의 0~n번째 항의 합이다.(0번~n번 쉬프트 할 수 있기 때문에)

여기까지는 문제를 보고 바로 생각했는데

두 수가 $a_i$로 주어질 때 두 수가 연산을 해서 만들어 질 수 있는지 판별하는 것을 naive 하게 set으로 구현해서 틀렸다.

2번 연산을 하면 무조건 홀수가 되고
3번 연산을 하면 무조건 4의 배수가 된다.

그래서 배열을 오름차순 정렬한 뒤 역으로 수를 줄여나가면서 그 수가 등장했던 수인지 확인하면 된다.

구현을 바꾸면서 같은 이름의 변수를 여러 번 사용하여 조건문을 헷갈렸다.
그리고 예제가 잘 나오길래 그냥 코드를 내서 페널티를 4번이나 받았다.
해법과 구현이 되게 직관적인 문제였는데 너무 많이 틀렸다.

침착하게 풀고, 예제가 나오더라도 코드를 한 번 따라가보면서 제대로 구현했는지 확인해 봐야 겠다.

여기까지 1시간 만에 풀었는데 E를 어떻게 푸는 지 잘 모르겠다.
이제 연습할 때 E 해법만 읽고 넘어가지 말고 코드까지 짜봐야겠다.