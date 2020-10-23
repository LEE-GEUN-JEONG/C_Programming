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


# C++

## 실습명
![image](https://user-images.githubusercontent.com/58419421/97053385-d6b32900-15bd-11eb-8942-ae667c766595.png)

### 클래스 구성에 대한 설명
1) 후에 strcpy_s라는 문자열 복사함수를 사용하므로 헤더함수에 <string.h>를 삽입하였다.
2) info라는 클래스를 정의하였고 학생들의 정보는 모두 private로 비공개 처리하였다. 
3) 클래스 멤버로 정수형(학생들의 성적), 문자형(학생의 이름과 등급)을 설정하였다.
4) 학생의 이름은 4자리 문자열이므로 최대길이를 4로 설정하였고 등급은 포인터배열을 활용하여 정의하였다.
5) public에서는 private에 접근하기 위한 멤버 함수들이 정의되어있다.(아래 참고)

### <클래스 멤버 구성>
1. setinfo1 멤버함수는 문자열(포인터배열)을 인수로 받아들이고 strcpy_s라는 문자열 복사함수를 이용하여 인수를 name이라는 비공개멤버에 대입시킨다.
2. setinfo2 멤버함수는 정수형 변수 4개를 입력으로 받아들여 각각 비공개 멤버인 중간고사,기말고사,과제,출석점수에 대입시킨다. 그리고 이들의 합으로 totalscore를 정의하고 다중 if문을 활용하여 grade를 정의한다.
3. show와 show2 멤버함수는 set함수를 통해 할당된 비공개함수값들을 출력한다.
4. sort함수는 후에 main함수에서 학생들의 성적을 총합순으로 내림차순하기위해 정의되었다. 비공개함수 totalscore값에 접근하기 위하여 sort멤버함수를 정의하였고 totalscore값을 리턴한다.

- main 함수에서 입력으로 받아들일 여러 가지 변수들을 정의하였다. 중요한 점으로 객체의 동적 생성을 위한 size변수의 정의와 후에 있을 totalscore비교를 위한 forsort라는 객체를 1개 정의하였다.
- new 클래스네임을 통한 size만큼의 크기를 가진 studentinfo라는 객체 배열을 생성하였다.

- 학생들의 이름과 성적을 입력한다. 그 후 setinfo1, setinfo2 멤버함수를 이용하여 입력된 값을 비공개멤버에 접근한다.
- 입력한 결과가 올바르게 입력되었는지 확인하기 위해 show함수를 통해 입력결과를 출력한다.
- do-while문을 활용하여 재입력 여부를 묻는다.

- 학생들의 성적을 totalscore순으로 내림차순하기 위한 부분이다.
- 정렬을 실행하는 실습과제에서 많이 했듯이 temp라는 쓰레기값을 만들어 값을 저장하고자 한다.
- 따라서 클래스에서 이를 활용하기 위하여 forsort라는 객체(쓰레기값객체)를 정의하였다.
- totalscore값을 리턴하는 sort멤버함수를 통하여 객체의 totalscore값들을 각각 모두 비교한다.
- 비교는 for문을 통하여 첫 번째 객체부터 마지막 객체까지 모두 각각 비교가 되도록 하였다. 
- 쓰레기값 객체 forsort를 통하여 j번째 객체의 총합이 크다면 앞 선 I번 째 객체와 모든 멤버를 교환한다.

- 앞선 과정을 통해 객체들의 정렬 상태가 총합순으로 내림차순 되었다.
- 따라서 for문과 show2라는 멤버함수를 통하여 모든 객체의 시험결과를 출력한다.(출력시에는 앞선과정을 통하여 내림차순으로 출력된다.)
- do-while문을 통하여 프로그램 재실행 여부를 묻는다.

### 고찰
1. 문자열 길이를 4로 정의하였는데 이것은 null문자를 포함한 것이다. 따라서 입력되는 문자열은 총 3개의 문자를 입력하여야 하고 자동적으로 null문자가 있기에 입력한 문자열의 길이는 4가 되는 것이다. 따라서 문자열을 4자리 입력하면은 오류가 발생한다. 그러므로 프로그램에서 문자열을 길이는 3까지 입력하라고 강조하였다.

2. strcpy는 char형의 문자열을 복사하는 함수로 정의는 strcpy(복사 받을 변수,복사 할 변수)와 같다. strcpy_s는 strcpy와 비슷하지만 복사할 최대크기의 인자를 포함한다. 즉 strcpy_s의 정의는 strcpy_s(복사 받을 변수, 최대 길이, 복사 할 변수)이다. 추가적으로 strnspy함수는 문자열을 원하는 길이만큼 복사하는 함수로 정의는 strncpy(복사 받을 변수, 복사 할 변수, 복사 할 길이)이다. 특징적으로 strncpy함수는 null문자를 복사하지 않는다.

3. 앞선 수 많은 실습에서 배열의 정렬을 할 때 쓰레기값 temp를 활용한 swap함수를 많이 사용하였다. 이것이 클래스 객체에까지 적용 될 수 있다는 것이 인상적이였다. 쓰레기값 temp가 아닌 쓰레기값 객체 forsort라는 객체를 생성하여 swap함수에 이용하였다. 객체a=객체b를 하면 객체 b의 모든멤버가 객체 a에 대입된다는 것을 활용하였다.

4. 클래스의 모든 멤버는 비공개로 정의되었기에 동적 생성된 객체들을 총합순으로 내림차순 정렬 할 때 다소 까다로웠다. 왜냐하면 totalscore는 비공개멤버이기 때문에 접근하기가 쉽지 않았다. 따라서 totalscore값을 리턴하는 sort라는 쉬운 멤버함수를 정의하고 이를 활용하여 객체.sort()처럼 쉽게 totalscore 비공개 멤버에 접근할 수 있었다.

5. 모든 배열의 첫 번째 항은 0으로부터 시작한다. for문을 통하여 학생들의 순위를 출력할 때에는 1번부터 출력되게 하여야했다. 따라서 객체배열의 첫 번째 시작은 0이고 출력하는 순번은 시작이 1인 점을 유의하여 출력결과를 작성하였다. 즉, 출력결과 for문의 시작변수 int i=0으로 초기값이 설정되어있고 출력시에[i+1]을 하여 출력결과는 1부터 시작하게 하였다.

6. 프로그램의 재실행 여부 또는 입력한 것을 재입력하는 재입력 여부를 묻고 이를 실행 할 때에는 do-while문을 활용하여 아주 쉽게 가능하였다. 앞선 많은 과제에서 했듯이 이번 최종과제에서도 do-while문을 이용하여 사용자가 실수를 하여 입력을 잘못하였거나 다른 수강생들의 성적을 평가할 때에 do-while문을 활용하여 재입력 또는 프로그램 재실행을 하였다.

## 실습 결과
![image](https://user-images.githubusercontent.com/58419421/97053522-0eba6c00-15be-11eb-8421-6c06ae026150.png)
![image](https://user-images.githubusercontent.com/58419421/97053549-1a0d9780-15be-11eb-8267-a539925fc49d.png)



