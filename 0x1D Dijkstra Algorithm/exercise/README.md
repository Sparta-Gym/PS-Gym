# Learning About

<!--ts-->

- [Learning About](#learning-about)
  - [<a href="https://www.acmicpc.net/problem/1753" rel="nofollow">1753 - 최단경로</a>](#1753---최단경로)
    - [1. 해결 핵심 아이디어](#1-해결-핵심-아이디어)
    - [2. 코멘트](#2-코멘트)
  - [<a href="https://www.acmicpc.net/problem/11779" rel="nofollow">11779 - 최소비용 구하기 2</a>](#11779---최소비용-구하기-2)
    - [1. 해결 핵심 아이디어](#1-해결-핵심-아이디어-1)
    - [2. 코멘트](#2-코멘트-1)
  - [<a href="https://www.acmicpc.net/problem/1238" rel="nofollow">1238 - 파티</a>](#1238---파티)
    - [1. 해결 핵심 아이디어](#1-해결-핵심-아이디어-2)
    - [2. 코멘트](#2-코멘트-2)
  - [<a href="https://www.acmicpc.net/problem/1504" rel="nofollow">1504 - 특정한 최단 경로</a>](#1504---특정한-최단-경로)
    - [1. 해결 핵심 아이디어](#1-해결-핵심-아이디어-3)
    - [2. 코멘트](#2-코멘트-3)
  - [<a href="https://www.acmicpc.net/problem/1916" rel="nofollow">1916 - 최소비용 구하기</a>](#1916---최소비용-구하기)
    - [1. 해결 핵심 아이디어](#1-해결-핵심-아이디어-4)
    - [2. 코멘트](#2-코멘트-4)
  - [<a href="https://www.acmicpc.net/problem/1261" rel="nofollow">1261 - 알고스팟</a>](#1261---알고스팟)
    - [1. 해결 핵심 아이디어](#1-해결-핵심-아이디어-5)
    - [2. 코멘트](#2-코멘트-5)
  - [<a href="https://www.acmicpc.net/problem/17835" rel="nofollow">17835 - 면접보는 승범이네</a>](#17835---면접보는-승범이네)
    - [1. 해결 핵심 아이디어](#1-해결-핵심-아이디어-6)
    - [2. 코멘트](#2-코멘트-6)
  - [<a href="https://www.acmicpc.net/problem/20183" rel="nofollow">20183 - 골목 대장 호석 - 효율성 2</a>](#20183---골목-대장-호석---효율성-2)
    - [1. 해결 핵심 아이디어](#1-해결-핵심-아이디어-7)
    - [2. 코멘트](#2-코멘트-7)
  - [<a href="https://www.acmicpc.net/problem/24042" rel="nofollow">24042 - 횡단보도</a>](#24042---횡단보도)
    - [1. 해결 핵심 아이디어](#1-해결-핵심-아이디어-8)
    - [2. 코멘트](#2-코멘트-8)
  - [<a href="https://www.acmicpc.net/problem/1162" rel="nofollow">1162 - 도로포장</a>](#1162---도로포장)
    - [1. 해결 핵심 아이디어](#1-해결-핵심-아이디어-9)
    - [2. 코멘트](#2-코멘트-9)
  - [<a href="https://www.acmicpc.net/problem/1854" rel="nofollow">1854 - K번째 최단경로 찾기</a>](#1854---k번째-최단경로-찾기)
    - [1. 해결 핵심 아이디어](#1-해결-핵심-아이디어-10)
    - [2. 코멘트](#2-코멘트-10)
  - [<a href="https://www.acmicpc.net/problem/5719" rel="nofollow">5719 - 거의 최단 경로</a>](#5719---거의-최단-경로)
    - [1. 해결 핵심 아이디어](#1-해결-핵심-아이디어-11)
    - [2. 코멘트](#2-코멘트-11)
  - [<a href="https://www.acmicpc.net/problem/13907" rel="nofollow">13907 - 세금</a>](#13907---세금)
    - [1. 해결 핵심 아이디어](#1-해결-핵심-아이디어-12)
    - [2. 코멘트](#2-코멘트-12)
  - [<a href="https://www.acmicpc.net/problem/22870" rel="nofollow">22870 - 산책 (large)</a>](#22870---산책-large)
    - [1. 해결 핵심 아이디어](#1-해결-핵심-아이디어-13)
    - [2. 코멘트](#2-코멘트-13)

<!-- Created by https://github.com/ekalinin/github-markdown-toc -->
<!-- Added by: sungminyou, at: 2022년 12월 10일 토요일 09시 28분 01초 KST -->

<!--te-->

## [1753 - 최단경로](https://www.acmicpc.net/problem/1753)

### 1. 해결 핵심 아이디어

- 주어진 시작점에서 다른 모든 정점으로의 최단 경로를 구해라 => 하나의 정점에서 다른 모든 정점으로의 최단 거리를 구해라 => 다익스트라 쓸 수 있다
- 모든 간선의 가중치는 10 이하의 자연수이다 => 음수 가중치를 갖는 간선이 없다 => 다익스트라 써라

### 2. 코멘트

- 패스

## [11779 - 최소비용 구하기 2](https://www.acmicpc.net/problem/11779)

### 1. 해결 핵심 아이디어

- 다익스트라 알고리즘을 사용하여 임의의 한 점에서 다른 임의의 한 점으로 가는 최단 경로 구하는 문제
- 다익스트라 알고리즘을 수행하면서 경로 복원 테이블을 이용하여 경로 복원을 할 수 있다

### 2. 코멘트

- 패스

## [1238 - 파티](https://www.acmicpc.net/problem/1238)

### 1. 해결 핵심 아이디어

- 모든 시작점에서 x까지의 최단거리, x에서 다른 모든 정점까지의 거리가 필요해서 모든 정점 간의 최단거리를 구하는 알고리즘인 플로이드를 이용할 수도 있겠지만 정점 n의 상한이 1000이라 플로이드로는 시간 초과를 피할 수 없게된다
- 그래서 모든 정점을 시작점으로 하여 다익스트라 알고리즘을 수행하여 모든 정점까지의 최단 거리를 각각 계산해주고, 왕복 거리 중 최대값을 출력해주자
- 시간 복잡도는 우선 순위 큐를 이용한 다익스트라 알고리즘은 O(ElogE)이고 그것을 모든 정점에 대해 수행하므로 O(VElogE)이므로 통과하는데 지장이 없기 때문이다

### 2. 코멘트

- 패스

## [1504 - 특정한 최단 경로](https://www.acmicpc.net/problem/1504)

### 1. 해결 핵심 아이디어

- 어려울 줄 알았는데 의외로 해법이 간단했던 문제
- 그냥 단순하게 생각해서 min{(시작, u) + (u, v) + (v, n), (시작, v) + (v, u) + (u, n)}이 정답이다
- 간선의 가중치를 더하다가 오버플로가 날 것을 생각하지 못하고(중복해서 탈 수 있다) int로 했다가 한참을 해맸다..(쪽팔린 줄 알아라)
- 시작점을 각각 1, u, v로 하여 다익스트라 알고리즘을 수행한 후 위 식을 출력해주면 정답, 최단거리가 INF와 같거나 크면 도달 불가능

### 2. 코멘트

- 패스

## [1916 - 최소비용 구하기](https://www.acmicpc.net/problem/1916)

### 1. 해결 핵심 아이디어

- 시간 제한이 0.5초이긴 하지만 간선의 상한이 십만이고, 우선순위 큐를 이용한 다익스트라 알고리즘의 시간복잡도는 O(ElogE)이므로 시간 제한 내에 들어올 수 있다
- 이 문제의 함정? 은 한 도시에서 출발하여 다른 도시에 도착하는 M개의 버스가 있다는 조건 밖에 없어 임의의 두 도시 u, v사이를 여러 버스가 오갈 수 있다는 것이다(두 정점 사이에 간선이 여러 개 일 수 있다)
- 두 도시를 연결하는 버스가 1대 밖에 없다고하는 말이 없는데 왜 한 개라고 생각했는지.. 조건이 없으면 어떤 모양의 그래프가 될 지 모른다
- 여러 개의 간선을 처리하기 위해 입력을 인접 행렬을 통해서 받았고(최소 값으로 대치하기 위해, 인접 리스트는 그 간선이 있는지 검색하는 과정이 필요) 입력을 모두 받고, 인접리스트에 최종 값을 저장해주었다
- 간선의 가중치의 상한이 십만이고, 간선의 개수의 상한이 십만이라 long long을 사용해야 오버플로를 방지할 수 있다

### 2. 코멘트

- 패스

## [1261 - 알고스팟](https://www.acmicpc.net/problem/1261)

### 1. 해결 핵심 아이디어

- 이 문제는 새로운 차원 개념을 도입하여 BFS로만 해결 가능했던 문제
- 다익스트라 알고리즘으로도 이 문제를 해결할 수 있는데, 플로이드 단원에서 봤던 백양로 브레이크 문제의 아이디어를 사용하였다
- 격자형 그래프에서 한 정점에서 다음 정점으로 갈 때, 그 다음 정점이 벽이라면(1) 가중치를 1로 두고, 반대로 빈 공간이라면 가중치를 0으로 두어 시작점 (1, 1)에서 끝 점(n, m)까지의 최단 거리를 구해주면, 최소 몇 개의 벽을 뚫어야하는지 구할 수 있다

### 2. 코멘트

- 처음에 구현할 때 인접 리스트를 따로 만들어야하나 생각했었는데, 굳이 그럴 필욘 없다

## [17835 - 면접보는 승범이네](https://www.acmicpc.net/problem/17835)

### 1. 해결 핵심 아이디어

- 한 시작점에서 다른 모든 정점으로 최단거리를 구하는 방법으로는 시간초과를 받게된다 => O(VElgE), V, E 상한이 각각 십만, 오십만
- 해결책이 떠오르지 않아서 정답코드를 참조하였다
- 면접장들과 각 도시 사이의 최단거리를 구하는 풀이로 접근
- 풀이에선 문제의 조건과는 반대로 면접장에서 도시로 가야하기 때문에 간선을 입력받을 때 시작 정점과 끝 정점을 반대로 받는다
- 면접장이 있는 도시들은 거리를 0으로 설정하고 우선순위 큐에 넣는다 => 시작점이 여러개인 다익스트라
  - 이렇게 해도 안 꼬이나 생각해봤는데(시작점이 여러 개이므로 각 정점까지의 거리가 각자 다 다를 건데 정확한 결과가 나오는지), 이 문제라서 상관없는 것 같다
  - 면접장까지의 거리가 가장 먼 도시와 그 거리를 구하는 것이다
  - 살펴보는 면접장의 순서에 상관없이 도시 a에서 가장 가까운 면접장이 결정된다 => 최소가 갱신되면 갱신한다
  - 모든 면접장에서 제일 먼 도시 X는 모든 면접장과 X사이의 거리의 최솟값이다
  - 만약 한 정점에서 다른 모든 정점까지의 정확한 거리를 구하라고 했을 때는 이렇게하면 안된다
- multigraph라 인접 행렬을 사용해서 입력받으려했는데, 메모리 초과가 난다, 그냥 인접리스트로 모두 입력받았다

### 2. 코멘트

- 시간복잡도 틀리게 계산하고 삽질할 뻔 했다..

## [20183 - 골목 대장 호석 - 효율성 2](https://www.acmicpc.net/problem/20183)

### 1. 해결 핵심 아이디어

### 2. 코멘트

## [24042 - 횡단보도](https://www.acmicpc.net/problem/24042)

### 1. 해결 핵심 아이디어

### 2. 코멘트

## [1162 - 도로포장](https://www.acmicpc.net/problem/1162)

### 1. 해결 핵심 아이디어

### 2. 코멘트

## [1854 - K번째 최단경로 찾기](https://www.acmicpc.net/problem/1854)

### 1. 해결 핵심 아이디어

### 2. 코멘트

## [5719 - 거의 최단 경로](https://www.acmicpc.net/problem/5719)

### 1. 해결 핵심 아이디어

### 2. 코멘트

## [13907 - 세금](https://www.acmicpc.net/problem/13907)

### 1. 해결 핵심 아이디어

### 2. 코멘트

## [22870 - 산책 (large)](https://www.acmicpc.net/problem/22870)

### 1. 해결 핵심 아이디어

### 2. 코멘트