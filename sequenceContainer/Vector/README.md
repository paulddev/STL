# Vector


## initialize
4 x 5 의 2차원 vector를 선언하는 방법, 동시에 1로 초기화
```cpp
vector<vector<int>> v(4, vector<int>(5, 1));
```
이렇게도 초기화 가능하다.
```cpp
vector<vector<int>> v2{ {1}, {2,3}, {4,5,6} };
```
`row`와 `col`을 직접 지정해서 주는 방법도 있다.
```cpp
vector<vector<int>> v;
int row = 5;
int col = 6;
v.assign(row, vector<int>(col, 1));
```
