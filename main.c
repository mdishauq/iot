.global _start
_start:
	
	start:
    MOV     R0, #24      
    MOV     R1, #4        

    MOV     R2, #0       
    MOV     R3, #32       

div_loop:
    CMP     R3, #0
    BEQ     div_done

    LSL     R2, R2, #1
    MOV     R4, R0, LSR #31
    ORR     R2, R2, R4
    LSL     R0, R0, #1

    CMP     R2, R1
    BLT     skip_subtract
    SUB     R2, R2, R1
    ORR     R0, R0, #1

skip_subtract:
    SUBS    R3, R3, #1
    B       div_loop

div_done:
stop:
    B stop
