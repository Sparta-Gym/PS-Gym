# Mathematical theory

#### 도움이 될만한 수학적 이론


1. ``나머지 연산``
```
수열의 나머지가 같은지 검사하기..
s[i] = m*a + r
s[i-1] = m*b + r
if(나머지가 같다면)
s[i] - s[i-1] = m*(a-b) +(r-r)
이므로,
s[i] - s[i-1] = m * (a-b)이다.
```

2. ``최대공약수``

<pre>
  <code>
거리가 있을 때 매 회 똑같은 길이로 이동한다고 하면 그것은 거리의 약수
여러개의 거리가 있고, 이것들을 똑같은 길이로 이동한다고 하면 그것은 최대공약수
이런식으로 실생활에 적용해보며 숫자들 사이에 어떤 관계가 있는지 찾는다.
이론을 알면 도움을 얻을 수있다.
문제 풀면서 발견한 사실
수열에서의 최대공약수 - G = GCD(s1,s2) -> Loop for S[3] ~ S[n] G = GCD(G,S[i])
  </code>
</pre>

3. `최소공배수`

4. `최대공약수와 최소공배수의 관계`

5. `소수`

```
소수에는 대표적인 2가지 알고리즘이 있다.
  
- 소수판별알고리즘 -

=> 여러 개 O(logN), O(N)이 있다.

- 에라토스테네스의 체 -

=> 구간사이의 소수들
```

6. `팩토리얼`

7. `진법변환`

8. `소인수분해`
```
매우 큰 수에서 그 수의 자릿수에 관한 문제가 나온다면 소인수 분해도 한번 쯤 생각해볼 수 있다.
n!에서 0의 갯수라던지..
소인수 분해의 참된 뜻은 수를 더이상 나눠지지 않는 요소들로 쪼개버리는 작업..
더이상 나눠지지 않는 요소들 = 소수
```
