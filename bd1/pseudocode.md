# Pseudocode — Number Magic Table (Topic 12)

## Main algorithm

1. Start.
2. Display `NUMBER MAGIC TABLE`.
3. Ask the user to enter `n` from 1 through 1,000,000.
4. While `n < 1` or `n > 1,000,000`, show an error and ask again.
5. Set `i = 1`.
6. While `i <= 10`:

   * Display `n x i = n * i`.
   * Increase `i` by 1.
7. If `n mod 2 = 0` and `n > 0`, display `Even number`; otherwise display `Odd number`.
8. Call `digitSum(n)` and display the returned digit sum.
9. Set `temp = n` and `reverse = 0`.
10. While `temp > 0`:

    * Set `reverse = reverse * 10 + temp mod 10`.
    * Set `temp = temp div 10`.
11. Display `reverse`.
12. Ask for three positive integers `a`, `b`, and `c`.
13. While any of `a`, `b`, or `c` is less than or equal to zero, show an error and ask for all three again.
14. Calculate `sa = digitSum(a)`, `sb = digitSum(b)`, and `sc = digitSum(c)`.
15. Display `sa`, `sb`, and `sc`.
16. If `sa >= sb` and `sa >= sc`, select `a`.
17. Otherwise, if `sb >= sa` and `sb >= sc`, select `b`.
18. Otherwise, select `c`.
19. Display the selected number.
20. End.

## Function: `digitSum(number)`

1. Set `sum = 0`.
2. While `number > 0`:

   * Add `number mod 10` to `sum`.
   * Set `number = number div 10`.
3. Return `sum`.

