.ORIG x3000
    LD R0, X
    LD R1, MOD
    NOT R2, R1
    ADD R2, R2, #1
    
    WHILE ADD R3, R0, R2
        ;; blank
        ADD R0, R0, R2
        BR WHILE
    ENDWHILE
    ;; blank
    HALT
    
    X   .fill 17
    MOD .fill 5
    ANSWER .blkw 1
.end