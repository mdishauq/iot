    AREA DivisionExample, CODE, READONLY
    ENTRY

start
    MOV     R0, #37      ; dividend
    MOV     R1, #5       ; divisor

    UDIV    R2, R0, R1   ; R2 = quotient = R0 / R1
    MLS     R3, R2, R1, R0  ; R3 = remainder = R0 - (R2 * R1)

    ; Now:
    ; R2 contains quotient (7)
    ; R3 contains remainder (2)

stop
    B stop              ; infinite loop to stop program

    END
