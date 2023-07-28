entry; Global main
section: .text
Bits 64
main
extern printf
mov eax, edi
fadd to std1 std0
xor eax
call printf
ret
format `Hello, Holberton,0`

