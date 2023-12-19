# 00 - 세팅하기
# --------------------------------
# !현재지원 OS 는 윈도우 입니다
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
# --------------------------------
# PCS\\setting\\win-setup.ps1 을 실행하여 하이라이팅을 세팅합니다
#  L 만약 실행이 안될시
#    L 파워셀 (관리자권한) 실행 >   Set-ExecutionPolicy -ExecutionPolicy RemoteSigned   > Y
#  L 적용이 되었을시 이 파일이 자동으로 하이라이팅 됩니다
#    L 만약에 VSC 를 키고 적용시켰을시에는 VSC 를 재부팅 해주세요



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
#def <- 함수선언
#def <return 했을때 값 타입> <함수명>() :
def void pr_string():     #출력타입이 void 를 가진 pr_string 변수를 지정합니다
    print("Hello World")  #Hello World를 출력합니다
def int main():
    pr_string()           #Hello World


def int add(int a,int b): #출력타입이 int 를 가진 add 변수를 지정합니다 이때 인자값은 a 랑 b 를 받는데 각각 타입은 int,int 입니다
    return a + b          #a랑b값을 받은뒤에 더한뒤에 return
def int main():
    print(add(1,4))       #5


# 08 - Class 선언하기
#class <- Class선언
#class <클래스이름>:
class _TEST_:
    #def (함수선언) static <return 했을때 값 타입> <함수명>() :
    def static void work():
        i = 0
        while true:
            if i >= 100000000:
                break
            else:
                i++
def int main():
    #클래스이름::함수이름()
    _TEST_::work()


import time.h
import cstdlib
class _TEST_:
    def static int* Arr():
        call = Array.int(5)
        for i=0;i<=sizeof(call);i++:
            call[i] = rand()
        return call
    def static void pit(int* call):
        print(f"배열길이 : {to_string(sizeof(call))}")
        for i=0;i<=sizeof(call);i++:
            print(f"{to_string(i)}번째 값 : {to_string(call[i])}")
def int main():
    start = clock()
    #START
    index = _TEST_::Arr()
    _TEST_::pit(index)   #배열길이 : 4
                         #0번째 값 : 41
                         #1번째 값 : 18467
                         #2번째 값 : 6334
                         #3번째 값 : 26500
                         #4번째 값 : 19169
                         #0ms
    #END
    end = clock()
    ms_count = to_string((end - start))
    print(f"{ms_count}ms")


#--- 다른파일에서 클래스 불러오기---#
#index.sp
class _INDEX_:
    def static void work():
        i = 0
        while true:
            if i >= 100000000:
                break
            else:
                i++
#main.sp
import index.cpp
def int main():
    _TEST_::work()


# 09 - 배열 선언하기
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


# 10 - 반복문 선언하기
def int main():
    call = Array.int(5)
    for i=0;i<sizeof(call);i++:
        print(call[i])
    return 0
def int main():
    while true:
        break
    return 0


# 11 - if 문 선언하기
def int main():
    Bool_True = true
    Bool_False = false
    if Bool_True == Bool_True:
        print("this is true")      #this is true
    else:
        print("this is not work")  #위에 if문이 실행되었으므로 무시됩니다


    if Bool_True == Bool_False:
        print("this is not work")  #거짓이므로 무시됩니다
    elif Bool_True == not Bool_False:
        print("this is true")      #Bool_False(false) 가 not 논리연산자가 실행되었으므로 true 기 때문에 실행됩니다
    else:
        print("this is not work")  #위에 if문이 실행되었으므로 무시됩니다


    if Bool_True == Bool_False or Bool_True == not Bool_False:
        print("this is true")      #Bool_True == Bool_False 는 거짓이지만 Bool_True == not Bool_False 가 true 이고 or 논리연산자 때문에 작동됩니다

    if Bool_True == Bool_False and Bool_True == not Bool_False:
        print("this is not work")  #Bool_True == Bool_False 는 거짓이지만 Bool_True == not Bool_False 가 true 이고 and 논리연산자 때문에 무시됩니다


    if Bool_True != Bool_False:
        print("this is true")      #this is true
    

    if Bool_True != Bool_False:
        pass                       #엔터기능이랑 똑같습니다 (아무 기능X)
        print("this is work")      #pass 는 엔터기능이기 때문에 이 코드는 작동됩니다
    else:
        print("this is not work")


# 12 - Fstring
def int main():
    text_1 = "Hello"
    text_2 = "World"

    f_String_1 = f"{text_1} {text_2}"
    f_String_2 = "{text_1} {text_2}"

    print(f_String_1) #Hello World
    print(f_String_2) #{text_1} {text_2}