# Data Structures and Algorithms

Most of implementations are based on [Open Data Structures Book](https://opendatastructures.org/)


# How to Run

Go to some chapters
```
make run
```

# Conventions


In the pseudo code the data structure will always be generic, so we pass DSName<T>. `DSName` being the name of data structure and `<T>` being the generic type. 


The function notation that will be used is `fn function_name(args: type...) -> return possibilities` if the functions return more than one thing, we will put inside `()`, e.g, `fn foo(arg: int) -> (int, string)`.


When the C code use `exit` we will call `Exception` because it's crash the program and print a message in the screen, and when it's return `-1` followed by a `fprintf` we call `Error` because it's don't crash the program just return an error message and it's value. 

Example of Exception:

```

fn init(arr: ArrayList<T>) -> (void, Exception) 

```

the function init can return nothing (void), but initialize the list. Thefore, if something goes wrong, the code just crash and throw an exception.


Example of Error:

```

fn get(arr: ArrayList<T>, position: int) -> (T, Error)

```

The function init can return T (a generic element of any type), but if something goes wrong just return a `Error`.

---
