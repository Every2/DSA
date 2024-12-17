# Data Structures and Algorithms

Most of implementations are based on [Open Data Structures Book](https://opendatastructures.org/)


# How to Run

Go to some chapter and type:
```
make run
```

# Conventions


In the pseudocode, the data structure will always be generic, so we use `DSName<T>`, where DSName is the name of the data structure and `<T>` is the generic type.

The function notation that will be used is `fn function_name(args: type...) -> return possibilities`. If the function returns more than one thing, we will put them inside `{}`, e.g., `fn foo(arg: int) -> {int, string}`.


When the C code uses `exit`, we will call it `Exception` because it crashes the program and prints a message on the screen. When it returns `-1` followed by a `fprintf`, we call it `Error` because it doesn't crash the program, it just returns an error message and its value.

Example of Exception:

```

fn init(arr: ArrayList<T>) -> {void, Exception}

```

the function `init` can return nothing (void), but initialize the list. Thefore, if something goes wrong, the code just crash and throw an exception.


Example of Error:

```

fn get(arr: ArrayList<T>, position: int) -> {T, Error}

```

The function `get` can return T (a generic element of any type), but if something goes wrong just return an `Error`.
