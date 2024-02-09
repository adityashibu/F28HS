    .global _start

_start:
    @ This is a comment
_exit:
    MOV R0, #65
    MOV R7, #1
    SWI 0

