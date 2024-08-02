section .data
msg db "Hello world!" ; Content for outstream
len equ $ - msg  ; Length of output string


section .text
global _start:    ; for linker

_start:		: Starting point for linker
	mov edx,len ; Length of string




