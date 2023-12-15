import time.h
int main() {
    const start = clock()
    let Int = 10
    let Float = 10.1
    let String = "Hello World"
    let Bool_true = true
    let Bool_false = false
    const name = "Shiba_Dog"
    let String_F = f"hi~ my name is {name}"
    let String_NF = "hi~ my name is {name}"
    print(Int)
    print(Float)
    print(String)
    print(Bool_true)
    print(Bool_false)
    print(String_F)
    print(String_NF)
    const ends = clock()
    print(start,ends)
    print(f"{std::to_string(ends - start)}ms")
}