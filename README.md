# ACM

ACM-ICPC problems

## Easy testing

This useful script will test the problem you are working on:

```bash
g++ -o main main.cpp && ./main < in.txt > result.txt && diff result.txt out.txt
```

You can make an alias like `build`:

```bash
alias build="g++ -o main main.cpp && ./main < in.txt > result.txt && diff result.txt out.txt"
```

Happy coding!
