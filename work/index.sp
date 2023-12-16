import time.h
int main() {
    start = clock()
    #START
    call = new int[5]
    call[0] = 10
    call[1] = 50
    call[2] = 90
    call[3] = 40
    call[4] = 20
    print(call[0],call[1],call[2],call[3],call[4])
    #END
    end = clock()
    print(f"{std::to_string(end - start)}ms")
}