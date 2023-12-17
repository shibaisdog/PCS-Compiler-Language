# 00 - 세팅하기
# --------------------------------
# !mingw32 가 먼저 깔려있어야합니다
# C:\\ 부분에 PCS 를 압축을 풉니다
# 환경변수를 path > C:\\PCS 를 추가합니다
# 설치확인을 위해 pcs -v 를 입력합니다
# --------------------------------
# pcs -p "작업폴더경로" -f "작업파일" -o "컴파일출력할폴더경로"
#  L 이떄 작업폴더하고 컴파일출력할폴더경로가 같은경우 "컴파일출력할폴더경로" 는 빼도됩니다
#     L pcs -p "작업폴더경로" -f "작업파일" -o
#  L 만약 C++ 로만 컴파일 하고싶은경우 -o 부분을 없애시면 됩니다
#     L pcs -p "작업폴더경로" -f "작업파일"


# 01 - trigraph
#  Sequence | Replacement
# -----------------------
#    ??=          #
#    ??(          [
#    ??/          \
#    ??)          ]
#    ??'          &
#    ??<          {
#    ??!          |
#    ??>          }
#    ??-          ~


# 02 - 주석처리하기
# "#" 을 이용하면 주석처리를 할수있습니다


# 03 - 파일 세팅하기
def int main():


# 04 - 모듈 불러오기
import time.h # time.h 라는 이름의 모듈을 불러옵니다
def int main():


# 05 - 값 출력하기
def int main():
    Int1 = 10
    Int2 = 20
    print(Int1) #10
    print(Int2) #20
    print(Int1,Int2) #10 20


# 06 - 변수 지정하기
def int main():
    Int = 10               #Int 라는 이름을 가진 int 변수를 지정하고 값은 10으로 지정합니다
    Float = 10.1           #Float 라는 이름을 가진 float 변수를 지정하고 값은 10.1으로 지정합니다
    String = "Hello World" #String 라는 이름을 가진 string 변수를 지정하고 값은 Hello World으로 지정합니다
    print(String)          #Hello World
    String = "Bye World"   #String 라는 이름을 가진 변수가 이미 있으므로 값을 Bye World 으로 변경합니다
    print(String)          #Bye World
    BO_true = true         #BO_true 라는 이름을 가진 bool 변수를 지정하고 값은 true으로 지정합니다
    BO_false = false       #BO_false 라는 이름을 가진 bool 변수를 지정하고 값은 false으로 지정합니다
    print(BO_true)         #1
    print(BO_false)        #0


# 07 - 함수 선언하기
def <- 함수선언
def <return 했을때 값 타입> <함수명>() :
#예시
def void pr_string():     #출력타입이 void 를 가진 pr_string 변수를 지정합니다
    print("Hello World")  #Hello World를 출력합니다
def int main():
    pr_string()           #Hello World


def int add(int a,int b): #출력타입이 int 를 가진 add 변수를 지정합니다 이때 인자값은 a 랑 b 를 받는데 각각 타입은 int,int 입니다
    return a + b          #a랑b값을 받은뒤에 더한뒤에 return
def int main():
    print(add(1,4))       #5


# 08 - 배열 선언하기
def int main():
    call = Array.int(5)    #call 이름을 가진 auto 변수에 배열 5개를 선언합니다
    call[0] = 10           #배열 첫번째값을 10으로 지정합니다
    call[1] = 50           #배열 첫번째값을 50으로 지정합니다
    call[2] = 90           #배열 첫번째값을 90으로 지정합니다
    call[3] = 40           #배열 첫번째값을 40으로 지정합니다
    call[4] = 20           #배열 첫번째값을 20으로 지정합니다
    print(call[0],call[1],call[2],call[3],call[4]) #10 50 90 40 20

    call = Array.string(5) #call 이름을 가진 auto 변수에 배열 5개를 선언합니다
    call[0] = "Hello"      #배열 첫번째값을 "Hello"으로 지정합니다
    call[1] = "World"      #배열 첫번째값을 "World"으로 지정합니다
    call[2] = "oh~"        #배열 첫번째값을 "oh~"으로 지정합니다
    call[3] = "bye"        #배열 첫번째값을 "bye"으로 지정합니다
    call[4] = "World"      #배열 첫번째값을 "World"으로 지정합니다
    print(call[0],call[1],call[2],call[3],call[4]) #Hello World oh~ bye World


# 09 - 반복문 선언하기
def int main():
    call = Array.int(5)
    for i=0;i<sizeof(call);i++:
        print(call[i])
    return 0
def int main():
    while true:
        break
    return 0


# 10 - if 문 선언하기
Bool_True = true
Bool_False = false
if Bool_True == Bool_True:
    print("this is true")  #this is true
else:
    print("this is not work") #위에 if문이 실행되었으므로 무시됩니다

if Bool_True == Bool_False:
    print("this is not work") #거짓이므로 무시됩니다
elif Bool_True == not Bool_False:
    print("this is true")  #Bool_False(false) 가 not 논리연산자가 실행되었으므로 true 기 때문에 실행됩니다
else:
    print("this is not work") #위에 if문이 실행되었으므로 무시됩니다

if Bool_True == Bool_False or Bool_True == not Bool_False:
    print("this is true")  #Bool_True == Bool_False 는 거짓이지만 Bool_True == not Bool_False 가 true 이고 or 논리연산자 때문에 작동됩니다

if Bool_True == Bool_False and Bool_True == not Bool_False:
    print("this is not work")  #Bool_True == Bool_False 는 거짓이지만 Bool_True == not Bool_False 가 true 이고 and 논리연산자 때문에 무시됩니다

if Bool_True != Bool_False:
    print("this is true")  #this is true