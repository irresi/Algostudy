## A (00:06)

<문제>

<해법>

내 해법

k개를 주기로 앞 뒤로 번갈아 채워서 필요한 1의 개수를 센다.

모범 답안

나는 반복문 돌렸는데 여기서는 수식화했다.
첫 n-1개의 원소에 적어도 $\lceil \frac{n-1}{k} \rceil$개의 1이 있어야 한다.

따라서 답은 $\lceil \frac{n-1}{k} \rceil$+1이다.

<리뷰>

## B(00:23)

<문제>

램프마다 $a_i,b_i$가 주어진다.
램프를 켤때마다 $b_i$점을 받는다.

켜진 램프의 개수(x)가 $a_i$이상이면 i번째 램프가 부서진다(강제로 꺼지고 사용 x).

<해법>

내 해법

$a_i$ 오름차순, $b_i$ 내림차순으로 램프를 켠다.

a값이 k+1인 것을 k인 것보다 먼저 켠다고 할 때, k인 것들은 중간에 모두 부서지게 된다. 그리고 같은 조건일 때는 점수를 많이 받을 수 있는 것부터 켜는게 좋다.

모범 답안

$a_i=k$를 만족하는 램프의 수를 $c_k$라 하자.

만약 $c_k≥k$이고 $a_i=k$인 k개의 램프를 켤 때 모든 $c_k$개는 부서지고 너는 $c_k-k$개의 다른 램프에 대해 포인트를 받을 수 없을 것이다.

모든 i에 대해 값 $b_i$를 $d_{k,1}, d_{k,2},d_{k,3},\dots, d_{k,c_k}$

<리뷰>


## C(00:50)

<문제>

<해법>

<리뷰>

## D(00:00)

<문제>

<해법>

<리뷰>

## E(00:00)

<문제>

<해법>

<리뷰>

## Review
