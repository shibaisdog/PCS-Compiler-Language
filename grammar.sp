# 00 - 세팅하기
# --------------------------------
# !mingw32 가 먼저 깔려있어야합니다
# C:\\ 부분에 PCS 를 압축을 풉니다
# 환경변수를 path > C:\\PCS 를 추가합니다
# pcs -p "작업폴더경로" -f "작업파일" -o "컴파일출력할폴더경로"
#  L 이떄 작업폴더하고 컴파일출력할폴더경로가 같은경우 "컴파일출력할폴더경로" 는 빼도됩니다
#     L pcs -p "작업폴더경로" -f "작업파일" -o
#  L 만약 C++ 로만 컴파일 하고싶은경우 -o 부분을 없애시면 됩니다
#     L pcs -p "작업폴더경로" -f "작업파일"


# 01 - 주석처리하기
# "#" 을 이용하면 주석처리를 할수있습니다


# 02 - 파일 세팅하기
int main() {

}


# 03 - 모듈 불러오기
import time.h # time.h 라는 이름의 모듈을 불러옵니다
int main() {

}


# 04 - 값 출력하기
int main() {
    Int1 = 10
    Int2 = 20
    print(Int1) #10
    print(Int2) #20
    print(Int1,Int2) #10 20
}


# 05 - 변수 지정하기
int main() {
    Int = 10               #Int 라는 이름을 가진 int 변수를 지정하고 값은 10으로 지정합니다
    Float = 10.1           #Float 라는 이름을 가진 float 변수를 지정하고 값은 10.1으로 지정합니다
    String = "Hello World" #String 라는 이름을 가진 string 변수를 지정하고 값은 Hello World으로 지정합니다
    print(String)          #Hello World
    String = "Bye World"   #String 라는 이름을 가진 변수가 이미 있으므로 값을 Bye World 으로 변경합니다
    print(String)          #Bye World
}


# 06 - 배열 선언하기
int main() {
    call = new int[5] #call 이름을 가진 auto 변수에 배열 5개를 선언합니다
    call[0] = 10      #배열 첫번째값을 10으로 지정합니다
    call[1] = 50      #배열 첫번째값을 50으로 지정합니다
    call[2] = 90      #배열 첫번째값을 90으로 지정합니다
    call[3] = 40      #배열 첫번째값을 40으로 지정합니다
    call[4] = 20      #배열 첫번째값을 20으로 지정합니다
    print(call[0],call[1],call[2],call[3],call[4]) #10 50 90 40 20
}