# Tests — Number Magic Table

## Test 1: Normal Input

Энгийн оролт.

**Input:**

```text
12
18 25 99
```

**Expected Result:**

```text
NUMBER MAGIC TABLE
Enter n (1-1000000): 
Multiplication table:
      12 x  1 =         12
      12 x  2 =         24
      12 x  3 =         36
      12 x  4 =         48
      12 x  5 =         60
      12 x  6 =         72
      12 x  7 =         84
      12 x  8 =         96
      12 x  9 =        108
      12 x 10 =        120
Even number.
Digit sum: 3
Reversed number: 21

Enter three positive numbers (a b c): Digit sums: a=9, b=7, c=18
Number with largest digit sum: 99
```

**Flowgorithm Output:**

```text
[Flowgorithm дээр ажиллуулаад гаралтыг энд буулгана. Утга нь C-тэй ижил байх ёстой, баганын тэгшлэлт шаардлагагүй.]
```

**C Output:**

```text
NUMBER MAGIC TABLE
Enter n (1-1000000): 
Multiplication table:
      12 x  1 =         12
      12 x  2 =         24
      12 x  3 =         36
      12 x  4 =         48
      12 x  5 =         60
      12 x  6 =         72
      12 x  7 =         84
      12 x  8 =         96
      12 x  9 =        108
      12 x 10 =        120
Even number.
Digit sum: 3
Reversed number: 21

Enter three positive numbers (a b c): Digit sums: a=9, b=7, c=18
Number with largest digit sum: 99
```

## Test 2: Odd Number

Сондгой тоо.

**Input:**

```text
7
11 20 9
```

**Expected Result:**

```text
NUMBER MAGIC TABLE
Enter n (1-1000000): 
Multiplication table:
       7 x  1 =          7
       7 x  2 =         14
       7 x  3 =         21
       7 x  4 =         28
       7 x  5 =         35
       7 x  6 =         42
       7 x  7 =         49
       7 x  8 =         56
       7 x  9 =         63
       7 x 10 =         70
Odd number.
Digit sum: 7
Reversed number: 7

Enter three positive numbers (a b c): Digit sums: a=2, b=2, c=9
Number with largest digit sum: 9
```

**Flowgorithm Output:**

```text
[Flowgorithm дээр ажиллуулаад гаралтыг энд буулгана. Утга нь C-тэй ижил байх ёстой, баганын тэгшлэлт шаардлагагүй.]
```

**C Output:**

```text
NUMBER MAGIC TABLE
Enter n (1-1000000): 
Multiplication table:
       7 x  1 =          7
       7 x  2 =         14
       7 x  3 =         21
       7 x  4 =         28
       7 x  5 =         35
       7 x  6 =         42
       7 x  7 =         49
       7 x  8 =         56
       7 x  9 =         63
       7 x 10 =         70
Odd number.
Digit sum: 7
Reversed number: 7

Enter three positive numbers (a b c): Digit sums: a=2, b=2, c=9
Number with largest digit sum: 9
```

## Test 3: Minimum Valid Input

Хилийн утга (хамгийн бага).

**Input:**

```text
1
1 2 3
```

**Expected Result:**

```text
NUMBER MAGIC TABLE
Enter n (1-1000000): 
Multiplication table:
       1 x  1 =          1
       1 x  2 =          2
       1 x  3 =          3
       1 x  4 =          4
       1 x  5 =          5
       1 x  6 =          6
       1 x  7 =          7
       1 x  8 =          8
       1 x  9 =          9
       1 x 10 =         10
Odd number.
Digit sum: 1
Reversed number: 1

Enter three positive numbers (a b c): Digit sums: a=1, b=2, c=3
Number with largest digit sum: 3
```

**Flowgorithm Output:**

```text
[Flowgorithm дээр ажиллуулаад гаралтыг энд буулгана. Утга нь C-тэй ижил байх ёстой, баганын тэгшлэлт шаардлагагүй.]
```

**C Output:**

```text
NUMBER MAGIC TABLE
Enter n (1-1000000): 
Multiplication table:
       1 x  1 =          1
       1 x  2 =          2
       1 x  3 =          3
       1 x  4 =          4
       1 x  5 =          5
       1 x  6 =          6
       1 x  7 =          7
       1 x  8 =          8
       1 x  9 =          9
       1 x 10 =         10
Odd number.
Digit sum: 1
Reversed number: 1

Enter three positive numbers (a b c): Digit sums: a=1, b=2, c=3
Number with largest digit sum: 3
```

## Test 4: Invalid Input

Буруу оролт: 0 нь хүрээнээс гадуур тул дахин асууна.

**Input:**

```text
0
5
10 20 30
```

**Expected Result:**

```text
NUMBER MAGIC TABLE
Enter n (1-1000000): Invalid. Enter n (1-1000000).
Enter n (1-1000000): 
Multiplication table:
       5 x  1 =          5
       5 x  2 =         10
       5 x  3 =         15
       5 x  4 =         20
       5 x  5 =         25
       5 x  6 =         30
       5 x  7 =         35
       5 x  8 =         40
       5 x  9 =         45
       5 x 10 =         50
Odd number.
Digit sum: 5
Reversed number: 5

Enter three positive numbers (a b c): Digit sums: a=1, b=2, c=3
Number with largest digit sum: 30
```

**Flowgorithm Output:**

```text
[Flowgorithm дээр ажиллуулаад гаралтыг энд буулгана. Утга нь C-тэй ижил байх ёстой, баганын тэгшлэлт шаардлагагүй.]
```

**C Output:**

```text
NUMBER MAGIC TABLE
Enter n (1-1000000): Invalid. Enter n (1-1000000).
Enter n (1-1000000): 
Multiplication table:
       5 x  1 =          5
       5 x  2 =         10
       5 x  3 =         15
       5 x  4 =         20
       5 x  5 =         25
       5 x  6 =         30
       5 x  7 =         35
       5 x  8 =         40
       5 x  9 =         45
       5 x 10 =         50
Odd number.
Digit sum: 5
Reversed number: 5

Enter three positive numbers (a b c): Digit sums: a=1, b=2, c=3
Number with largest digit sum: 30
```

## Test 5: Maximum Valid Input

Хилийн утга (хамгийн их).

**Input:**

```text
1000000
99 88 77
```

**Expected Result:**

```text
NUMBER MAGIC TABLE
Enter n (1-1000000): 
Multiplication table:
 1000000 x  1 =    1000000
 1000000 x  2 =    2000000
 1000000 x  3 =    3000000
 1000000 x  4 =    4000000
 1000000 x  5 =    5000000
 1000000 x  6 =    6000000
 1000000 x  7 =    7000000
 1000000 x  8 =    8000000
 1000000 x  9 =    9000000
 1000000 x 10 =   10000000
Even number.
Digit sum: 1
Reversed number: 1

Enter three positive numbers (a b c): Digit sums: a=18, b=16, c=14
Number with largest digit sum: 99
```

**Flowgorithm Output:**

```text
[Flowgorithm дээр ажиллуулаад гаралтыг энд буулгана. Утга нь C-тэй ижил байх ёстой, баганын тэгшлэлт шаардлагагүй.]
```

**C Output:**

```text
NUMBER MAGIC TABLE
Enter n (1-1000000): 
Multiplication table:
 1000000 x  1 =    1000000
 1000000 x  2 =    2000000
 1000000 x  3 =    3000000
 1000000 x  4 =    4000000
 1000000 x  5 =    5000000
 1000000 x  6 =    6000000
 1000000 x  7 =    7000000
 1000000 x  8 =    8000000
 1000000 x  9 =    9000000
 1000000 x 10 =   10000000
Even number.
Digit sum: 1
Reversed number: 1

Enter three positive numbers (a b c): Digit sums: a=18, b=16, c=14
Number with largest digit sum: 99
```

