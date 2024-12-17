# Array Stack

For convenience, we call `"Array Stack"` as `Array List` because we do not implement FIFO operations, so the names are changed because of that.

# What is an Array List?

An array list can be defined as a sequential container like an Array on the heap.

# Attributes

`Data: T`: An array pointer to a sequence of objects.

`Capacity: uint`: The total capacity of objects the list can hold.

`Size: uint`: The number of elements currently in the list.

# Operations

`fn init() -> {Void, Exception}`

Initialize the list.

---

`fn get(array_list: <T>, position: uint) -> {T, Error}` 

Get the value at the specified position, if the specified position is invalid, return an error.

---

`fn set(array_list: <T>, position: uint, value: T) -> {T, Error}`

Changes the value at the specified position, if the specified is invalid, returns an error.

---
`fn add(array_list: <T>, position: uint, value: T) -> {Void, Exception}`

Adds the value at the specified position (can be read as the starting position). The code may be wrong, in C code it simply crashes, so it is considered an exception.

---
`fn remove(array_list: <T>, position: uint) -> {T, Error}`

Removes the value at the specified position and resizes it, if the position is invalid, returns an error.

# Helper functions

`fn free(array_list: <T>) -> {Void, Error}`

Frees the dynamically allocated memory used in `data`.

---

`fn resize(array_list: <T>) -> {Void, Exception}`

Case where the array increases in size:

If the size is greater than the capacity, simply increase the array.

Case where the array decreases:

If the size is three times smaller than the capacity, resize to save space.

But if the list cannot be resized, an Exception is thrown.
