# push-swap
## ✨ Features
Program that sorts stacks using indexed radix sort
- Uses two LIFO (Last In - First Out) stacks `a` and `b` (vector arrays)
- Parses user input and checks for duplicates with a hashtable
- Sorts the stacks with `pb`, `pa`, and `ra` operations

<p align="center">
  <img src="doc/" alt="Demo" />
</p>

## 📖 Introduction

> [!NOTE]
> ## 🔡 Input
> &nbsp;&nbsp;&nbsp;&nbsp;✔ Only `digits` are allowed (with a single sign) as input, separated by `spaces`
>
> The following are considered errors:
>
> &nbsp;&nbsp;&nbsp;&nbsp;❌ Numbers less than `INT_MIN` (-2147483648) or greater than `INT_MAX` (2147483647)
>
> &nbsp;&nbsp;&nbsp;&nbsp;❌ Empty argument, e.g. `" "`
>
> &nbsp;&nbsp;&nbsp;&nbsp;❌ Duplicate numbers
>
> &nbsp;&nbsp;&nbsp;&nbsp;❌ Leading or trailing non-digit characters, e.g. `"a1" "2b"`

> [!TIP]
> ## 🚀 How to use
- Run the following command to clone the repository and create `push_swap` program
``` git
git clone https://github.com/mordori/push-swap.git push-swap && cd push-swap && make
```
- Execute the program with numbers in a random order, for example
``` bash
./push_swap -4 7 -102 2 5 0 1 -8
```
or
``` bash
./push_swap "2 3 1" "6 9 7" 5 8 4
```

> [!TIP]
> Use `shuf` to generate `n` unique numbers from a range in a randomized order
> ``` bash
> ./push_swap $(shuf -i 0-100 -n 10)
> ```
> To count the amount of instructions used, pipe to `wc`
> ``` bash
> ./push_swap $(shuf -i 0-100 -n 10) | wc -l
> ```

The program will sort the numbers and print the called operations.

- To delete all of the compiled files, use
``` Makefile
make fclean
```
