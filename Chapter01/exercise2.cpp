#include <iostream>
#include <fstream>

using namespace std;

int main(int argc, char **argv){
    // 하나의 문자를 가리키는 포인터
    char *char_ptr = nullptr;
    // 10개의 정수 요소를 갖는 배열
    int array[10] = {0,};
    // 10개의 정수 요소를 갖는 배열을 가리키는 포인터
    int *array_ptr = array;
    // 문자로 이루어진 배열을 가리키는 포인터
    char char_array[10] = {0,};
    char *char_array_ptr = char_array;
    // "문자를 가리키는 포인터"를 가리키는 포인터
    char *new_char_ptr = char_ptr;
    // 정숫값을 갖는 상수
    const int const_int = 10;
    // 정숫값을 갖는 상수를 가리키는 포인터 
    int const *int_const_ptr = &const_int;
    // 정수를 가리키는 상수 포인터
    const int *const_int_ptr = &const_int;

    int stack_memory[1000] = {0,};
    int *heap_memory = new int(1000);
    // ==45060== Memcheck, a memory error detector
    // ==45060== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
    // ==45060== Using Valgrind-3.15.0 and LibVEX; rerun with -h for copyright info
    // ==45060== Command: ./Chapter01/exercise2-1
    // ==45060== 
    // ==45060== 
    // ==45060== HEAP SUMMARY:
    // ==45060==     in use at exit: 4 bytes in 1 blocks
    // ==45060==   total heap usage: 2 allocs, 1 frees, 72,708 bytes allocated
    // ==45060== 
    // ==45060== 4 bytes in 1 blocks are definitely lost in loss record 1 of 1
    // ==45060==    at 0x483BE63: operator new(unsigned long) (in /usr/lib/x86_64-linux-gnu/valgrind/vgpreload_memcheck-amd64-linux.so)
    // ==45060==    by 0x10929A: main (in /home)
    // ==45060== 
    // ==45060== LEAK SUMMARY:
    // ==45060==    definitely lost: 4 bytes in 1 blocks
    // ==45060==    indirectly lost: 0 bytes in 0 blocks
    // ==45060==      possibly lost: 0 bytes in 0 blocks
    // ==45060==    still reachable: 0 bytes in 0 blocks
    // ==45060==         suppressed: 0 bytes in 0 blocks
    // ==45060== 
    // ==45060== For lists of detected and suppressed errors, rerun with: -s
    // ==45060== ERROR SUMMARY: 1 errors from 1 contexts (suppressed: 0 from 0
    return 0;
}
