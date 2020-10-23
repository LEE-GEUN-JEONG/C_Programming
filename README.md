# KNU-SW용 저장소 입니다.

## 파일소개
# 수치해석(matlab)
### 과제 1
f(x) = f(a) + f`(a)(x-a) + {f``(a)(x-a)^2}/2 + ,,, + (f^(n)(a)/n!)*(x-a)^n 을 taylor series 를 이용하여 x가 0~1에 대해 f(x)=e^x 파형과 함수값을 나타내는 function 파일 작성
![수치해석 HW1](https://user-images.githubusercontent.com/58419421/69967248-5a55c880-155b-11ea-8592-59db7021296e.jpg)
<과제1>

#### 코드 설명
![1212](https://user-images.githubusercontent.com/58419421/69969718-4c567680-1560-11ea-9193-dca16e0552b8.jpg)
1) 테일러급수는 임의의 점에서의 함숫값을 다른 한 점에서의 함숫값과 도함수들로 예측하는 것임.
2) [range1,range2] 폐구간 범위에 datanumber만큼의 point를 찍는다.
3) 테일러 급수를 활용하기 위한 a(기준이 되는 다른 한 점), n(테일러급수 전개를 n차항까지 한다.)
4) linespace 내장함수를 활용하여 [range1,range2] 범위에 datanumber만큼의 배열을 만들고 rangestore에 저장한다..
5) 테일러급수 전개의 0차항 f(a)를 정의한다.(fx approximation)
6) 테일러급수 전개에서 f^(n) (<= 도함수 부분)은 fx = e^-x함수이므로 미분을 반복하면 부호만 바뀐다.
7) rangestore는 배열이므로 fxapp도 배열이 되고, fxapp 배열에 각 point에서의 함수값이 저장된다.
8) 결과 출력을 위한 for문과 plot문



### 과제 2
power method로 대칭행렬의 가장 큰 eigen value와 가장 작은 eigen value를 구하고, 그에 따른 eigen vector를 나타내는 파일 작성
![수치해석 HW2](https://user-images.githubusercontent.com/58419421/69967246-59bd3200-155b-11ea-8a82-05beb741cc29.jpg)
<과제2>

#### 코드 설명
![11111111111111111](https://user-images.githubusercontent.com/58419421/69970444-9b50db80-1561-11ea-89e9-320eb51ef7db.jpg)
1) 초기에 입력 행렬이 n >=3,square,symmetric matrix를 만족하는지 판별
![22222222222222](https://user-images.githubusercontent.com/58419421/69970445-9b50db80-1561-11ea-83f2-a2bee75c217e.jpg)
2) 초기 eigen value / eigen vector 설정
3) choice가 2인 경우는 가장 작은 eigen value를 구하므로 행렬에 inverse를 취해줌.
![3333333333333333333333333](https://user-images.githubusercontent.com/58419421/69970446-9be97200-1561-11ea-8455-181529358dfd.jpg)
4) power method를 이용하여 eigen value와 그 때의 eigen vector를 구함.
5) choice == 2 인 경우, eigen value 값에 역수를 취해줌.
6) 최대 반복 횟수는 100회이고, 허용오차보다 오차가 작아지면 그 즉시 for문을 탈출하도록 설계하였음.



# 컴퓨터학개론(matlab)
### 과제 1
huffman encoding을 이용한 데이터 압축 알고리즘 설계
![1](https://user-images.githubusercontent.com/58419421/69968484-dcdf8780-155d-11ea-9709-1880eb5487c0.jpg)
<과제1>

참고) 1. 첨부된 hwp 파일은 term project 제출 보고서임.
      2. 첨부된 txt 파일은 data compression을 필요로 하는 파일임. 

#### 알고리즘 설계
![1](https://user-images.githubusercontent.com/58419421/69973225-7c087d00-1566-11ea-9c8b-d9b8e6e2d858.jpg)
![2](https://user-images.githubusercontent.com/58419421/69973224-7c087d00-1566-11ea-9228-7961126c441a.jpg)
![3](https://user-images.githubusercontent.com/58419421/69973227-7c087d00-1566-11ea-9c61-86ecb94bce10.jpg)

#### 코드 설명
첨부된 m 파일을 참고하십시오.

#### 설계결과
![4](https://user-images.githubusercontent.com/58419421/69973228-7ca11380-1566-11ea-94a5-5083e73b6655.jpg)
![5](https://user-images.githubusercontent.com/58419421/69973229-7ca11380-1566-11ea-8464-451f3960f302.jpg)
![6](https://user-images.githubusercontent.com/58419421/69973532-fdf8a600-1566-11ea-8532-ea89f58529a6.jpg)


