/* Addition Modular, Multiplication Modular
   Substraction Modular - Tricky
   Division Modular - Hard - Fermat's Little Theorem

   Problems:
    Bit String,
    Trailling Zeroes
   */

/*MODULAR ARITHMETIC

1. What is Modulo?

a % m = remainder when a is divided by m.

Example:
17 % 5 = 2

In Competitive Programming, problems often ask:
"Print the answer modulo 10^9 + 7"

MOD = 1,000,000,007


2. Why use Modulo?

Some answers become extremely large and cannot fit in int or long long.

Instead of calculating the entire answer, we take % MOD after every operation.

Example:

Instead of:
x = x * i;

Use:
x = (x * i) % MOD;

This keeps x small.


3. Important Properties

Addition:
(a + b) % m = ((a % m) + (b % m)) % m

Subtraction:
(a - b) % m = ((a % m) - (b % m)) % m

Multiplication:
(a * b) % m = ((a % m) * (b % m)) % m

Therefore, we can take modulo after every operation.


4. Example: Factorial Modulo

Calculate n! % MOD:

long long x = 1;

for (int i = 2; i <= n; i++) {
    x = (x * i) % MOD;
}

cout << x << "\n";

Instead of calculating the huge value of n!, we keep taking % MOD.


5. Why long long?

Even if x is always less than MOD, multiplication can temporarily become large.

For MOD = 10^9 + 7:

x < 10^9 + 7
i < 10^9 + 7

x * i can be around 10^18.

Therefore, use:

long long

instead of:

int


6. Negative Modulo in C++

Mathematically:

-2 mod 7 = 5

But in C++:

-2 % 7 = -2

So if the result can become negative:

x = x % MOD;

if (x < 0)
    x += MOD;

Example:

int x = (3 - 5) % 7;   // -2

if (x < 0)
    x += 7;             // 5


7. Standard Pattern

const long long MOD = 1e9 + 7;

long long ans = 1;

for (int i = 1; i <= n; i++) {
    ans = (ans * i) % MOD;
}


8. CP Rule to Remember

If a problem says:
"Answer modulo 10^9 + 7"

Think:

→ Don't calculate the huge answer.
→ Take % MOD during calculations.
→ Use long long.
→ Be careful with negative values after subtraction.


Common MOD values:

10^9 + 7 = 1,000,000,007
10^9 + 9 = 1,000,000,009*/