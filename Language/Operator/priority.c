//priority of "." is higher than "*"

prototype: *p.f
misjudge:  (*p).f
right:     *(p.f)


//priority of "[]" is higher than "*"

prototype: int *ap[]
misjudge:  int (*ap)[]
right:     int *(ap[])


//priority of "==" and "!=" is higher than bit operators

prototype: val & mask != 0
misjudge:  (val & mask) != 0
right:     val & (mask != 0)


//priority of "==" and "!=" is higher than assignment operator

prototype: c = getchar() != EOF
misjudge:  (c = getchar()) != EOF
right:     c = (getchar() != EOF)


//priority of arithmetic operators is higher than displacement operators

prototype: msb << 4 + lsb
misjudge:  (msb << 4) + lsb
right:     msb << (4 + lsb)


//the priority of comma operator is the lowest in all operators

prototype: i = 1, 2
misjudge:  i = (1, 2)
right:     (i = 1), 2